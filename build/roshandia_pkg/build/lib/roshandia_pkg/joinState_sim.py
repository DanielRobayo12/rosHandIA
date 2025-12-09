import rclpy
from roshandmsg_pkg.msg import MsgHand
from sensor_msgs.msg import JointState
from std_msgs.msg import Float64
from rclpy.node import Node
import numpy as np
import math

global node
global pubs  

#map funcion like an arduino funcion
def maping(x:float, in_min:float,in_max:float):
    out_min = -10.22
    out_max = 0
    
    #limit input data
    y = np.clip(x,in_min,in_max)
    num = ((x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min)
    return num

#map funcion like an arduino funcion
def maping1(x): 
    in_min = 0.17
    in_max = 0.32
    out_min = -5.0
    out_max = 5.0
    
    #limit input data
    y = np.clip(x,in_min,in_max)
    
    return ((y - in_min) * (out_max - out_min) / (in_max - in_min) + out_min)



def callback(msg:MsgHand):
    global pubs
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
        print(f'finger{i}: {numRad[i]}')
        data = Float64()
        data.data =numRad[i]
        pub = pubs[i]
        pub.publish(data)

def main():
    global node
    global pubs
    
    
    rclpy.init()
    node = rclpy.create_node("join_publisher_sim")
    sub = node.create_subscription(MsgHand,"/handRead01",callback,1)
    pub1 = node.create_publisher(Float64,"/f1",10)
    pub2 = node.create_publisher(Float64,"/f2",10)
    pub3 = node.create_publisher(Float64,"/f3",10)
    pub4 = node.create_publisher(Float64,"/f4",10)
    pub5 = node.create_publisher(Float64,"/f5",10)
    pubs= [pub1, pub2, pub3, pub4, pub5]
    #time = node.create_timer(0.01,callTime)
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    node.destroy_node()


if __name__ == '__main__':
    main()