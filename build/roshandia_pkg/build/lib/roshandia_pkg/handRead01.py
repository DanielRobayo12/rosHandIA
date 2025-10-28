
import mediapipe as mp
import cv2
import rclpy
from roshandmsg_pkg.msg import MsgHand

global pub
global cam


def distance(d):#--------------------------------------dist
    dist = ((d[1][0]-d[0][0])**2 + (d[1][1]-d[0][1])**2)**0.5
    return dist

def callTime(): #--------------------------------------CallTime
    global pub
    global cam
    
    #IA init
    mp_hands = mp.solutions.hands
    mp_drawing = mp.solutions.drawing_utils
    
    hands = mp_hands.Hands(
    max_num_hands = 4,
    static_image_mode = False,
    )
    
    #Video init
    cam = cv2.VideoCapture(0)
    
    msg = MsgHand()
    d1 = [[0.0, 0.0],[0.0, 0.0]] #lm 2 4
    d2 = [[0.0, 0.0],[0.0, 0.0]] #lm 5 8
    d3 = [[0.0, 0.0],[0.0, 0.0]] #lm 9 12
    d4 = [[0.0, 0.0],[0.0, 0.0]] #lm 13 16
    d5 = [[0.0, 0.0],[0.0, 0.0]] #lm 17 20
    
    while rclpy.ok():
        
        ret, frame = cam.read()
        if not ret:
            break
        
        #process the hand data
        result = hands.process(frame)
        
    
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
            
            msg.d1 = float(distance(d1))
            msg.d2 = float(distance(d2))
            msg.d3 = float(distance(d3))
            msg.d4 = float(distance(d4))
            msg.d5 = float(distance(d5))
            
            pub.publish(msg)
           # print(msg)
        
            for hand_landmarks in result.multi_hand_landmarks:
                mp_drawing.draw_landmarks(
                    frame,
                    hand_landmarks,
                    mp_hands.HAND_CONNECTIONS)
        
        cv2.imshow("hands",frame)
        
        if cv2.waitKey(1) & 0xFF == 27:
            break
    
    

def main(): # ///////////////////////////////////////// ------- Main
    global pub
    global cam
    #Ros2 init
    rclpy.init()
    node = rclpy.create_node("hand_node")
    pub = node.create_publisher(MsgHand,"handRead01",1)
    
    
    #create a timer
    time = node.create_timer(0.001,callTime)
    
    
    rclpy.spin(node)
    
    #Shutdown the program
    
    rclpy.shutdown()
    node.destroy_node()
    cam.release()
    cv2.destroyAllWindows()
    
if __name__ == '__main__':
    main()
