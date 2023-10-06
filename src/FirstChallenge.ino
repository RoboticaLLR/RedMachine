// Declaración de Librerias
#include <Servo.h>
#include "Adafruit_TCS34725.h"
Adafruit_TCS34725 tcs =
Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_1X);


Servo pro;
int b;
int d = 0; // Distancia ultrasonido izquierdo
int a = 1;
int giro = 0 ;
int rec= 73; // Varor del servo para avarzar dececho
int da=16; // Distancia ultrasonido derecho
int t; // ultrasonido tiempo de rebote izquierdo
int te; // ultrasonido tiempo de rebote derecho
int vel= 48;
int gi=vel-15;
int red = 0;
int green = 0;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);// Trigger
  pinMode(11, INPUT);  //cho
  pinMode(12, INPUT); //Trigger
  pinMode(13, OUTPUT);  //Echo
  pinMode(22, OUTPUT);
  pinMode(53,INPUT);
  pinMode(52,INPUT);

  pro.attach(4);  // Pin de conwtrol del servo
  digitalWrite(22,HIGH);
  Serial.begin(9600);

  pro.write(rec);
  delay(4000);
  digitalWrite(8,HIGH);
  analogWrite(6,vel+6);
  
}


void loop() {


  //CALCULAR COLOR
  uint16_t R,G,B,C;
  tcs.getRawData(&R,&G,&B,&C);
  //DIRECCIONAR Y MOVER MOTORES


  //giro antihorario (Naranja)
  if((R>90)&&(C<450)&&(a==0)){
    a=1;
    rec++;
    
  }
//detectar giro horario(Azul)
  if((R<90)&&(C<450)&&(a==0)){
a=2;
  }

  
  ping();
 
    if((d<65)&&(a==1)){
    pro.write(100);
    analogWrite(6,gi);
    delay(1150);
 pro.write(rec);
 delay(500);
 analogWrite(6,vel);
  }


  
  

  if((d<65)&&(a==2)){
    pro.write(40);
    analogWrite(6,gi);
    delay(1150);
 pro.write(rec);
 delay(500);
 analogWrite(6,vel);
  }
 
 


  
  
  //detectar 3 vueltas y detenerse
  if (giro == 12){
analogWrite(8,0);
a=40;
}
}

// Control del sensor de ultrasonido izquierdo y cálculo de distancia
int ping() {
   digitalWrite(10, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(10, LOW);


  t = pulseIn(12, HIGH); //obtenemos el ancho del pulso
d=t/59;
}