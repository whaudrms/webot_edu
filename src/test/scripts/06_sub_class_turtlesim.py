import rospy
from turtlesim.msg import Pose

class Sub_class:
    def __init__(self):
        rospy.init_node("sub_node")
        rospy.Subscriber("/turtle1/pose",Pose,callback=self.callback)

    def callback(self,msg:Pose): 
        print("-------------------")
        print(f"x:{msg.x}")

if __name__ == "__main__":
    try:
        sub_node = Sub_class()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass