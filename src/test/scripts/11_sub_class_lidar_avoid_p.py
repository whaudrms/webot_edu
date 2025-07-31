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
            if abs(cal_degrees[i]) < 45 and 0 < msg.ranges[i] < 3:
                print(f"Obstacle:{cal_degrees[i]}")
                obstacles_index.append(i)

        if obstacles_index != []:
            print("Obstacle Detected")

            left_space = len(msg.ranges) - obstacles_index[-1]
            right_space = obstacles_index[0]
            left_avg_degree = (90+cal_degrees[obstacles_index[-1]])//2
            right_avg_degree = (-90+cal_degrees[obstacles_index[0]])//2

            if left_space > right_space:
                steer = radians(left_avg_degree)
                print("left")
                print(steer)
            else:
                steer = radians(right_avg_degree)
                print("right")
                print(steer)

        else:
            print("No Obstacle Detected")
            steer=0

        self.cmd_msg.steering = steer * 0.5         # P gain : 0.5
        self.cmd_msg.accel = 0.3
        self.cmd_msg.brake = 0

        self.ctrl_pub.publish(self.cmd_msg)

        print("-------------------")

 

if __name__ == "__main__":
    pub_node = Sub_class()
    rospy.spin()