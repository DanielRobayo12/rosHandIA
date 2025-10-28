import rclpy
from roshandmsg_pkg.msg import MsgHand
from sensor_msgs.msg import JointState

global sub
global pub

def convert_to_rads(num:float):
    pass

def callTime(msg:MsgHand):
    
    join = JointState()
    joints = ["f1_to_hand","f2_to_hand","f3_to_hand","f4_to_hand","f5_to_hand"]
    nums = [msg.d1, msg.d2, msg.d3, msg.d4, msg.d5]
    
    
    

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