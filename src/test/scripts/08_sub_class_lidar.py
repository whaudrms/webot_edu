import rospy
from sensor_msgs.msg import LaserScan
from math import *

class Sub_class:
    def __init__(self):
        rospy.init_node("sub_node")
        rospy.Subscriber("/lidar2D",LaserScan,callback=self.callback)

    def callback(self,msg:LaserScan): 
        degree_min = degrees(msg.angle_min)
        degree_max = degrees(msg.angle_max)
        degree_increment = degrees(msg.angle_increment)

        cal_degrees = [degree_min+degree_increment*index for index,value in enumerate(msg.ranges)]

        print("-------------------")
        print(degree_min)
        print(degree_max)
        print(degree_increment)
        print(cal_degrees)

if __name__ == "__main__":
    try:
        sub_node = Sub_class()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass