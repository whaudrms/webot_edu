import rospy
from sensor_msgs.msg import LaserScan
from math import *
from morai_msgs.msg import CtrlCmd

class Sub_class:
    def __init__(self):
        rospy.init_node("sub_node")
        rospy.Subscriber("/lidar2D",LaserScan,callback=self.callback)
        self.ctrl_pub = rospy.Publisher("/ctrl_cmd_0",CtrlCmd,queue_size=10)
        self.cmd_msg = CtrlCmd()

    def callback(self,msg:LaserScan): 
        degree_min = degrees(msg.angle_min)
        degree_max = degrees(msg.angle_max)
        degree_increment = degrees(msg.angle_increment)

        obstacle = False

        cal_degrees = [degree_min+degree_increment*index for index,value in enumerate(msg.ranges)]

        for i,v in enumerate(msg.ranges):
            if -45 < cal_degrees[i] < 45 and 0 < msg.ranges[i] < 3:
                obstacle = True

        if obstacle == True:
            print("Obstacle")
            self.cmd_msg.accel = 0.0
            self.cmd_msg.brake = 1.0

        else:
            print("No Obstacle")
            self.cmd_msg.accel = 1.0
            self.cmd_msg.brake = 0.0

        self.ctrl_pub.publish(self.cmd_msg)

        print("-------------------")

if __name__ == "__main__":
    pub_node = Sub_class()
    rospy.spin()