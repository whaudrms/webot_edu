import rospy
from sensor_msgs.msg import CompressedImage
from morai_msgs.msg import CtrlCmd
from cv_bridge import CvBridge
from math import *
import cv2
import numpy as np

class Sub_class:
    def __init__(self):
        rospy.init_node("sub_node")
        rospy.Subscriber("/image_jpeg/compressed",CompressedImage,callback=self.callback)
        self.cmd_pub = rospy.Publisher('/ctrl_cmd_0',CtrlCmd,queue_size=10)
        self.bridge = CvBridge()
        self.cmd_msg = CtrlCmd()

    def callback(self,msg=CompressedImage):
        img = self.bridge.compressed_imgmsg_to_cv2(msg)
        hsv = cv2.cvtColor(img,cv2.COLOR_BGR2HSV)                    # h, s, v -> [0~179,0~255,0~255]
        # gray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

        y, x, channel = img.shape
        lower = np.array([15,100,100])   
        upper = np.array([45,255,255])
        masked_img = cv2.inRange(hsv,lower,upper)                    # True & False Image
        bit_img = cv2.bitwise_and(img,img,mask=masked_img)           # Convert Raw Image to Bitwise Image

        x1_margin = 80                                               # ROI points
        x2_margin = 255
        y2_margin = 300

        src1 = [x1_margin  , y        ]                              # Points to stretch 
        src2 = [x2_margin  , y2_margin]
        src3 = [x-x2_margin, y2_margin]
        src4 = [x-x1_margin, y        ]
        srcs = np.float32([src1,src2,src3,src4])

        dst1 = [x1_margin  , y]                                      # Where to stretch
        dst2 = [x1_margin  , 0]
        dst3 = [x-x1_margin, 0]
        dst4 = [x-x1_margin, y]
        dsts = np.float32([dst1,dst2,dst3,dst4])

        matrix = cv2.getPerspectiveTransform(srcs,dsts)              # Convert Bitwise Image to Warpped Image
        warp_img = cv2.warpPerspective(bit_img,matrix,(x,y))

        gray_warp_img = cv2.cvtColor(warp_img,cv2.COLOR_BGR2GRAY)    # Convert Warpped Image to Binary Image
        bin_img = np.zeros_like(gray_warp_img)
        bin_img[gray_warp_img!=0] = 1

        histogram = np.sum(bin_img,axis=0)                           # Convert Binary Image to Histogram # axis=0 -> Lane, axis=1 -> Stop Line
        histogram[histogram<100] = 0
        left_hist = histogram[0:x//2]                                
        right_hist = histogram[x//2:x]
        nonzero_left_index = np.nonzero(left_hist)[0]                      
        nonzero_right_index = np.nonzero(right_hist)[0]

        try:
            left_avg_index = (nonzero_left_index[0]+nonzero_left_index[-1])//2                  # **Calculate Left & Right lane index**
            right_avg_index = ((nonzero_right_index[0]+nonzero_right_index[-1])//2) + x//2
        except:
            left_avg_index = x//4
            right_avg_index = x*3//4
        center_avg_index = (left_avg_index + right_avg_index)//2                                # **Calculate Center lane index**
        cv2.line(bit_img, [center_avg_index,0],[center_avg_index,y],[0,255,0],7)
        cv2.line(bit_img, [x//2,0],[x//2,y],[0,0,255],3)

        diff_center_index = x//2 - center_avg_index                                             # **Calculate Steering**
        P_gain = 0.5
        steer = diff_center_index * (pi/x) * P_gain                                             # pi/x : index -> radian
        
        self.cmd_msg.accel = 0.2                                                                # Publish
        self.cmd_msg.steering = steer
        self.cmd_pub.publish(self.cmd_msg)

        # self.view("img",img)
        # self.view("masked_img",masked_img)
        self.view("bit_img",bit_img)
        # self.view("warp_img",warp_img)
        self.view("gray_warp_img",gray_warp_img)
        # self.view("bin_img",bin_img)

    def view(self,window_name,img):
        cv2.namedWindow(window_name,cv2.WINDOW_NORMAL) 
        cv2.imshow(window_name,img)

        if cv2.waitKey(1) == ord('q'):
            cv2.destroyAllWindows()
            rospy.signal_shutdown("User pressed 'q'")

if __name__ == "__main__":
    try:
        sub_node = Sub_class()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass