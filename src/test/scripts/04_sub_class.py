import rospy
from std_msgs.msg import Int32

class Sub_class:
    def __init__(self):
        rospy.init_node("sub_node")
        rospy.Subscriber("/counter",Int32,callback=self.callback)

    def callback(self,msg):
        print(msg)

if __name__ == "__main__":
    try:
        sub_node = Sub_class()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass