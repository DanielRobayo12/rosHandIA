
import mediapipe as mp
import cv2
import rclpy
from rosHandIa_pkg.msg import hmia

global pub


def distance(d):#--------------------------------------dist
    dist = ((d[1][0]-d[0][0])**2 + (d[1][1]-d[0][1])**2)**0.5
    return dist

def callTime(): #--------------------------------------CallTime
    global pub
    
    #IA init
    mp_hands = mp.solutions.hands
    mp_drawing = mp.solutions.drawing_utils
    
    hands = mp_hands.Hands(
    max_num_hands = 4,
    static_image_mode = False,
    )
    
    #Video init
    cam = cv2.VideoCapture(0)
    
    msg = hmia()
    d1 = [[0.0, 0.0],[0.0, 0.0]] #lm 2 4
    d2 = [[0.0, 0.0],[0.0, 0.0]] #lm 5 8
    d3 = [[0.0, 0.0],[0.0, 0.0]] #lm 9 12
    d4 = [[0.0, 0.0],[0.0, 0.0]] #lm 13 16
    d5 = [[0.0, 0.0],[0.0, 0.0]] #lm 17 20
    
    while rclpy.ok():
        
        ret, frame = cam.read()
        if not ret:
            break
        
        rgb = cv2.cvtColor(frame,cv2.COLOR_BGR2RGB)
        result = hands.process(rgb)
        
        if result.multi_hand_landmarks:
            hand = result.multi_hand_landmarks[0]
            
            #Copiar datos de landmarks
            d1[0][0] = hand.landmark[2].x
            d1[0][1] = hand.landmark[2].y
            d1[1][0] = hand.landmark[4].x
            d1[1][1] = hand.landmark[4].y
            
            d2[0][0] = hand.landmark[5].x
            d2[0][1] = hand.landmark[5].y
            d2[1][0] = hand.landmark[8].x
            d2[1][1] = hand.landmark[8].y
            
            d3[0][0] = hand.landmark[9].x
            d3[0][1] = hand.landmark[9].y
            d3[1][0] = hand.landmark[12].x
            d3[1][1] = hand.landmark[12].y
            
            d4[0][0] = hand.landmark[13].x
            d4[0][1] = hand.landmark[13].y
            d4[1][0] = hand.landmark[16].x
            d4[1][1] = hand.landmark[16].y
            
            d5[0][0] = hand.landmark[17].x
            d5[0][1] = hand.landmark[17].y
            d5[1][0] = hand.landmark[20].x
            d5[1][1] = hand.landmark[20].y
            
            msg.d1 = distance(d1)
            msg.d2 = distance(d2)
            msg.d3 = distance(d3)
            msg.d4 = distance(d4)
            msg.d5 = distance(d5)
            
            pub.publish(msg)
            print(msg)
        
        cv2.imshow(hands,frame)
    
    cam.release()
    cv2.destroyAllWindows()

def main(): # ///////////////////////////////////////// ------- Main
    global pub
    #Ros2 init
    rclpy.init()
    node = rclpy.create_node("hand_node")
    pub = node.create_publisher(hmia,"hand_pub",1)
    
    
    #create a timer
    time = node.create_timer(0.01,callTime)
    
    
    rclpy.spin(node)
    
    #Shutdown the program
    
    rclpy.shutdown()
    node.destroy_node()
    
if __name__ == "__main__":
    main()








       
        




    
    
    


