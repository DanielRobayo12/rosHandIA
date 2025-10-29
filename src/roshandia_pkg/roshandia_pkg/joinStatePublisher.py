import rclpy
from roshandmsg_pkg.msg import MsgHand
from sensor_msgs.msg import JointState
from rclpy.node import Node
import numpy as np
import math

global node
global pub

#map funcion like an arduino funcion
def maping(x:float, in_min:float,in_max:float):
    out_min = -1.22
    out_max = 0
    
    #limit input data
    y = np.clip(x,in_min,in_max)
    num = ((x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min)
    return num

#map funcion like an arduino funcion
def maping1(x): 
    in_min = 0
    in_max = 0.12
    out_min = -1.0
    out_max = 1.0
    
    #limit input data
    y = np.clip(x,in_min,in_max)
    
    return ((y - in_min) * (out_max - out_min) / (in_max - in_min) + out_min)



def callback(msg:MsgHand):
    global pub
    global node
    i = 0
    join = JointState()
    joints = ["f1_to_hand","f2_to_hand","f3_to_hand","f4_to_hand","f5_to_hand"]
    nums = [msg.d1, msg.d2, msg.d3, msg.d4, msg.d5]
    min_r = [0.06, 0.1, 0.1,0.01]
    max_r = [0.2, 0.25, 0.25, 0.21]
    numRad = []
    
    
    numRad.append(maping1(msg.d1))
    
    #maping the input data
    for j in nums[1:]:
        numRad.append(maping(j,min_r[i],max_r[i]))
        i = i+1
        #print(f"D{i}: {numRad[i]}")

    #set the valors to the JoinState mensage
    for i in range(len(joints)):
        join.name.append(joints[i]) 
        join.position.append(numRad[i])
        join.effort.append(100)
        join.velocity.append(0.5)
        #print(f"D{i+1}: {numRad[i]}")
        #print(f"D{i+1}: {join.position[i]}")
    join.header.stamp = node.get_clock().now().to_msg()
    pub.publish(join)

def main():
    global node
    global pub
    
    
    rclpy.init()
    node = rclpy.create_node("join_publisher")
    sub = node.create_subscription(MsgHand,"/handRead01",callback,1)
    pub = node.create_publisher(JointState,"/joint_states",10)
    
    #time = node.create_timer(0.01,callTime)
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    node.destroy_node()


if __name__ == '__main__':
    main()