import rospy
from sensor_msgs.msg import LaserScan

class Sub_class:
    def __init__(self):
        rospy.init_node("sub_node")
        rospy.Subscriber("/lidar2D",LaserScan,callback=self.callback)

    def callback(self,msg:LaserScan): 
        print("-------------------")
        print(msg)

if __name__ == "__main__":
    pub_node = Sub_class()
    rospy.spin()