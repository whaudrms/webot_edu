import rospy
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from random import *

class Sub_class:
    def __init__(self):
        rospy.init_node("sub_node")
        rospy.Subscriber("/turtle1/pose",Pose,callback=self.callback)
        self.node = rospy.Publisher("/turtle1/cmd_vel", Twist, queue_size=10)
        self.twist_msg = Twist()

    def callback(self,msg:Pose):
        if (1<msg.x<10) & (1<msg.y<10):
            self.twist_msg.linear.x = random()*2
            self.twist_msg.angular.z = random()*4-2
        else:
            self.twist_msg.linear.x = 0.5
            self.twist_msg.angular.z = 1.0

        self.node.publish(self.twist_msg)

        print("-------------------")
        print(f"x:{msg.x}")
        print(f"y:{msg.y}")
        print(f"theta:{msg.theta}")

if __name__ == "__main__":
    try:
        sub_node = Sub_class()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass