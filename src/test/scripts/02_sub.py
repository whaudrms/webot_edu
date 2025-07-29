import rospy
from std_msgs.msg import Int32

rospy.init_node("sub_node")

def callback(msg):
    print(msg)

rospy.Subscriber("/counter",Int32,callback=callback)
rospy.spin()