#include <Arduino.h>
#include <ESP32Servo.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pca = Adafruit_PWMServoDriver();

float i = 0.0;
float j = 0.0;

int con1(float);
float con2(float);
float con3(float);
float con4(float);
float con5(float);


void setup() {
  //pinMode(32,OUTPUT);
  
  Serial.begin(230400);
  Serial1.setTimeout(1);

  //Sep gpio pines whit the adafruit
  Wire.begin(32,33); //SDA = 32 | SCL = 33
  pca.begin();
  pca.setPWMFreq(50);

  /*pca.setPWM(0,0,150); 
  pca.setPWM(1,0,150);  //778 = 25°
  pca.setPWM(2,0,200);
  pca.setPWM(3,0,200);
  pca.setPWM(4,0,200);*/

}



void loop() {
  float val = 0;


  if(Serial.available()){
  
    
    
    String input = Serial.readStringUntil('\n');
    //Serial.println(input);

    if(input.startsWith("D1")){ // ------------------------D1
      val =input.substring(3).toFloat();
      pca.setPWM(0,0,con1(val));


      //Serial.print("con1: ");
      //Serial.println(con1(val));
    }
    if(input.startsWith("D2")){ // ------------------------D2
      val = input.substring(3).toFloat();
      pca.setPWM(1,0,con2(val));
      
      Serial.print("con2: ");
      Serial.println(con1(val));
    }
    if(input.startsWith("D3")){ // ------------------------D3
      val = input.substring(3).toFloat();
      pca.setPWM(2,0,con3(val));

      Serial.print("con3: ");
      Serial.println(con1(val));
    }
    if(input.startsWith("D4")){ // ------------------------D4
      val = input.substring(3).toFloat();
      pca.setPWM(3,0,con4(val));

      //Serial.print("con4: ");
      //Serial.println(con1(val));
    }
    if(input.startsWith("D5")){ // ------------------------D5
      val = input.substring(3).toFloat();
      pca.setPWM(4,0,con5(val));
      //Serial.print("Estado D5: Funcionando: ");
      //Serial.println(val);
    }
    
  }

}

int con1(float num){
  num = num*100;
  //i = constrain(num,(0.09*100),(0.12*100));
  j = map(num,(0.09*100),(0.12*100),100,400);  
  return j;
  // open 0.12
  // close 0.09
}
float con2(float num){
  num = num*100;
  //i = constrain(num,(0.06*100),(0.2*100));
  j = map(num,(0.06*100),(0.2*100),400,100);  
  return j;
  // open 0.2
  // close 0.06
}
float con3(float num){
  num = num*100;
  //i = constrain(num,(0.1*100),(0.25*100));
  j = map(num,(0.1*100),(0.25*100),400,100);  
  return j;
  // open 0.25
  // close 0.1
}
float con4(float num){
  num = num*100;
  //i = constrain(num,(0.1*100),(0.25*100));
  j = map(num,(0.1*100),(0.25*100),400,100);  
  return j;
  // open 0.25
  // close 0.1
}
float con5(float num){
  num = num*100;
  //i = constrain(num,(0.01*100),(0.21*100));
  j = map(num,(0.18*100),(0.31*100),100,100);  
  return j;
  // open 0.31
  // close 0.018
}


