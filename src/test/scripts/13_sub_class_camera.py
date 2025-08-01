import rospy
from sensor_msgs.msg import CompressedImage
from cv_bridge import CvBridge
import cv2
import numpy as np

class Sub_class:
    def __init__(self):
        rospy.init_node("sub_node")
        rospy.Subscriber("/image_jpeg/compressed",CompressedImage,callback=self.callback)
        self.bridge = CvBridge()

    def callback(self,msg=CompressedImage):
        img = self.bridge.compressed_imgmsg_to_cv2(msg)
        hsv = cv2.cvtColor(img,cv2.COLOR_BGR2HSV)                    # h, s, v -> [0~179,0~255,0~255]
        # gray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
        self.view("img",img)
     
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