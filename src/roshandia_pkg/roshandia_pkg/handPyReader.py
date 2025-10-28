import cv2
import mediapipe as mp

mp_hands = mp.solutions.hands
mp_drawing = mp.solutions.drawing_utils

# Configuración del módulo hands
with mp_hands.Hands(
    static_image_mode=False,
    max_num_hands=2,
    min_detection_confidence=0.5,
    min_tracking_confidence=0.5) as hands:

    cap = cv2.VideoCapture(0)  # cámara
    
    while cap.isOpened():
        success, image = cap.read()
        if not success:
            break
        
        # Convertir a RGB
        image_rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
        image_rgb.flags.writeable = False
        
        results = hands.process(image_rgb)
        
        image_rgb.flags.writeable = True
        image_output = cv2.cvtColor(image_rgb, cv2.COLOR_RGB2BGR)
        
        if results.multi_hand_landmarks:
            for hand_landmarks in results.multi_hand_landmarks:
                mp_drawing.draw_landmarks(
                    image_output,
                    hand_landmarks,
                    mp_hands.HAND_CONNECTIONS)
        
        cv2.imshow('MediaPipe Hands', image_output)
        if cv2.waitKey(5) & 0xFF == 27:
            break
    
    cap.release()
    cv2.destroyAllWindows()
