// Declaración de Librerias
#include <Servo.h>
#include "Adafruit_TCS34725.h"
Adafruit_TCS34725 tcs =
Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_1X);

Servo pro;
int d = 16; // Distancia ultrasonido izquierdo
int a;
int rec= 105; // Varor del servo para avarzar dececho
int da=16; // Distancia ultrasonido derecho
int t; // ultrasonido tiempo de rebote izquierdo
int te; // ultrasonido tiempo de rebote derecho
int vel= 80;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);// Trigger
  pinMode(11, INPUT);  //cho
  pinMode(12, OUTPUT); //Trigger
  pinMode(13, INPUT);  //Echo
  pinMode(22, OUTPUT);
  pro.attach(4);  // Pin de conwtrol del servo
  digitalWrite(22,HIGH);
  Serial.begin(9600);
  if(tcs.begin()){
    Serial.println("Inicializando");
    delay(2000);
  }
  else{
    Serial.println("Error");
    Serial.println("Debe de revisar las conexiones e iniciar nuevamente");
    while(1)delay(500);
  }
  pro.write(rec);
  delay(800);
  digitalWrite(8,HIGH);
  analogWrite(9,vel);
  pro.write(105);
}

void loop() {

  //CALCULAR COLOR
  uint16_t R,G,B,C;
  tcs.getRawData(&R,&G,&B,&C);
  //DIRECCIONAR Y MOVER MOTORES

  //MOVIMIENTO AL VER UNA naranja
  if((R>100)&&(B<150)){
    digitalWrite(8,LOW);

    pro.write(vel);

    analogWrite(9,vel);
    digitalWrite(10,LOW);
  digitalWrite(8,HIGH);
  delay(1500);

  analogWrite(9,vel);
  pro.write(rec);
  }
//AZULLLL
  if((R<90)&&(G<110)&&(B<130)){
    pro.write(rec);
    analogWrite(9,0);
    delay(750);
    digitalWrite(8,HIGH);
    analogWrite(9,110);
    pro.write(114);
    delay(2100);
    pro.write(rec);
    analogWrite(9,70);
  }

  ping();
  if(d<17){
    pro.write(55);
  analogWrite(9,vel);
    delay(100);
    pro.write(114);
    analogWrite(9,vel);
    delay(100);
    pro.write(rec);
    d=100;

  }
}

// Control del sensor de utrasonido izquierdo y cálculo de distancia
int ping() {
   digitalWrite(10, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(10, LOW);

  t = pulseIn(11, HIGH); //obtenemos el ancho del pulso
  d = t/59;
}

// Control del sensor de utrasonido derecho y cálculo de distancia
int ping1() {
   digitalWrite(12, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(12, LOW);

  te = pulseIn(13, HIGH); //obtenemos el ancho del pulso
  da = te/59;
}

