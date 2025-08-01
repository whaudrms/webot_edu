import rospy
from std_msgs.msg import Int32

class Pub_node():
    def __init__(self):
        rospy.init_node("pub_node")
        self.node = rospy.Publisher("/counter", Int32, queue_size=10)
        self.int_msg = Int32()
        self.rate = rospy.Rate(10)

    def main(self):
        n=0
        while not rospy.is_shutdown():
            n=n+1
            self.int_msg.data = n
            print(n)
            self.node.publish(self.int_msg)
            self.rate.sleep()

if __name__ == "__main__":
    try:
        pub_node = Pub_node()
        pub_node.main()
    except rospy.ROSInterruptException:
        pass

