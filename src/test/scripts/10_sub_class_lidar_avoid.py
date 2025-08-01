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

        obstacles_index = []

        cal_degrees = [degree_min+degree_increment*index for index,value in enumerate(msg.ranges)]

        for i,v in enumerate(msg.ranges):
            if -90 < cal_degrees[i] < 90 and 0 < msg.ranges[i] < 3:
                print(f"Obstacle:{cal_degrees[i]}")
                obstacles_index.append(i)                

        if obstacles_index != []:
            print("Obstacle")

            left_space = len(msg.ranges) - obstacles_index[-1]
            right_space = obstacles_index[0]

            if left_space > right_space:
                print("left")
                self.cmd_msg.steering = 1.0
            else:
                print("right")
                self.cmd_msg.steering = -1.0

        else:
            print("No Obstacle")
            self.cmd_msg.steering=0

        self.cmd_msg.accel = 0.5
        self.cmd_msg.brake = 0

        self.ctrl_pub.publish(self.cmd_msg)

        print("-------------------")
 

if __name__ == "__main__":
    try:
        sub_node = Sub_class()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass