import rospy
from std_msgs.msg import Int32

rospy.init_node("pub_node")
node = rospy.Publisher("/counter", Int32, queue_size=10)
int_msg = Int32()
n=0 

rate = rospy.Rate(10)

while not rospy.is_shutdown():
    n=n+1
    int_msg.data = n
    print(n)
    node.publish(int_msg)
    rate.sleep()

