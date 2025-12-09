import rclpy
from roshandmsg_pkg.msg import MsgHand
import serial # type: ignore
from rclpy.node import Node
global esp
global cont

def callback(msg:MsgHand):
    global esp
    global cont
    
    
    print(f"D1: {msg.d1}")
    print(f"D2: {msg.d2}")
    print(f"D3: {msg.d3}")
    print(f"D4: {msg.d4}")
    print(f"D5: {msg.d5}")
 
    mensage = "D1:"+str(msg.d1)+"\nD2:"+str(msg.d2)+"\nD3:"+str(msg.d3)+"\nD4:"+str(msg.d4)+"\nD5:"+str(msg.d5)+"\n"
    
    esp.write(mensage.encode("utf-8"))
    
    cont += 1
    #send a codificated msg
    

def createESP(node:Node):
    port = node.get_parameter("port").value
    baudrate = node.get_parameter("baudRate").value
    esp = serial.Serial(port,baudrate,timeout=0.01)
    return esp

def main():
    global esp
    global cont
    cont = 0

    #init 
    rclpy.init()
    
    #create a node
    node = rclpy.create_node("connect")
    
    #create subscriber
    sub = node.create_subscription(MsgHand,"/handRead01",callback,1)
    
   
    
    #declare arduino parameters
    node.declare_parameter("port","/dev/ttyUSB0")
    node.declare_parameter("baudRate",230400)
    
    esp = createESP(node)
    
    rclpy.spin(node)
    
    rclpy.shutdown()
    node.destroy_node()
    
if __name__ == "__main__":
    main()
    
    