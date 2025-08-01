import rospy
from geometry_msgs.msg import Twist

class Pub_node():
    def __init__(self):
        rospy.init_node("pub_node")
        self.node = rospy.Publisher("/turtle1/cmd_vel", Twist, queue_size=10)
        self.twist_msg = Twist()
        self.rate = rospy.Rate(10)

    def main(self):
        while not rospy.is_shutdown():
            self.twist_msg.linear.x = 1.0
            self.twist_msg.angular.z = 1.0
            self.node.publish(self.twist_msg)
            self.rate.sleep()

if __name__ == "__main__":
    try:
        pub_node = Pub_node()
        pub_node.main()
    except rospy.ROSInterruptException:
        pass

