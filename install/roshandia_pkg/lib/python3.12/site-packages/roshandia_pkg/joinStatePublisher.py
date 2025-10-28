import rclpy
from roshandmsg_pkg.msg import MsgHand
from sensor_msgs.msg import JointState

global sub
global pub

def callTime(msg:MsgHand):
    
    join = JointState()
    

def main():
    global sub
    global pub
    
    rclpy.init()
    node = rclpy.create_node("join_publisher")
    sub = node.create_subscription(MsgHand,"/handRead01",callTime,1)
    pub = node.create_publisher(JointState,"joint_states",10)
    
    time = node.create_timer(0.01,callTime)
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    node.destroy_node()


if __name__ == '__main__':
    main()