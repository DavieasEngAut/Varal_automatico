/*Importaçao de Libraries*/
#include <NewPing.h>

#define pinSensorA A0

/*
  PINOS NO ARDUINO CONSTANTES
*/ 
#define pinRainsensor A0
#define motorAcionator 5

//pinos sensor de distancia

#define TRIG 3
#define ECHO 2
#define MAX_DISTANCE 120
/*
 Definiçao do Sensor
*/

NewPing sensor(TRIG, ECHO, MAX_DISTANCE);

int distanceSensor = sensor.ping_cm();

void setup() {
  
   Serial.begin(9600);
  
   //config motor
   pinMode(motorAcionator, OUTPUT);
   
   //Configs para o Sensor
   pinMode(TRIG, OUTPUT);
   pinMode(ECHO, INPUT);
   
   
  
    
}

void loop() {
  
  //Função do Sensor ultrasonico
  
  
  

   /* 
     Supervisionamento da entrada na saida Analogica do Arduino
   
   */
   Serial.print(" ANALOG PIN SENSOR: ");
   Serial.print(analogRead(pinRainsensor));
   
   /*
   
    Supervisionamento da entrada Digital do motor  
    e verificaçao distancia
   */
   
    Serial.print(" MOTOR: ENTRADA DIGITAL: ");
    Serial.print(digitalRead(motorAcionator));
   
   
   
   /*
    Ativador do motor de retraçao
    */
    
    
  if (pinRainsensor <= 800){
    /* Retrair */
    
    digitalWrite(motorAcionator, HIGH);
    
    
  }else {
    /* Nao Retrair */
    
    digitalWrite(motorAcionator, LOW);
  }
  
  
  while (distanceSensor < 120 && pinRainsensor <= 800 ) {
    
    digitalWrite(motorAcionator, HIGH);
  } 
}
