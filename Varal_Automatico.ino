
//Definiçao pino Sensor de Chuva
#define pinRainsensor A0

// Definiçao dos Sensores de Fim de Curso
#define switchCursor 3
#define switchCursor2 4

//Variaveis Para Alocar os valores logicos do Sensor de fim de Curso
int valorCursor;
int valorCursor2;

//Variavel para capturar o valor do Sensor de Chuva
int valorSensor;

// Pinos Motor Varal 1
#define pinMot1A 10 
#define pinMot1B 9

// Pinos Motor Varal 2
#define pinMot2A 5
#define pinMot2B 6

/*Caso queira usar delay nos motores basta descomentar esta parte
const int tempo = 7000;
*/

void setup(){

    Serial.begin(9600);
    //Leitura do Pinos do Sensor fim de Curso
    pinMode(switchCursor, INPUT);
    pinMode(switchCursor2, INPUT);

  // Captura dos valores do Sensor de Fim de curso
    valorCursor = digitalRead(switchCursor);
    valorCursor2 = digitalRead(switchCursor2);
    
  // Captura de valores do Sensor de chuva
    pinMode(pinRainsensor, INPUT);
    valorSensor = analogRead(pinRainsensor);
    valorSensor = map(pinRainsensor, 0, 1023, 100, 0);
  
 //Print do Valor do sensor de Chuva
    Serial.print(valorSensor);

  // Deixando os pinos dos motores para soltarem energia
    pinMode(pinMot1A, OUTPUT);
    pinMode(pinMot1B, OUTPUT);
    pinMode(pinMot2A, OUTPUT);
    pinMode(pinMot2B, OUTPUT);


}

void loop(){
/*

Aferiçao dos Valores dos Sensores em tempo Real no Serial

*/
    Serial.print(valorSensor);
    delay(100);

    Serial.println("Valor Fim de Curso 1");
    Serial.print(valorCursor);
    delay(500);

    Serial.println("Valor Fim de Curso 1");
    Serial.print(valorCursor2);
    delay(500);

  /*Supervisionamento dos Motores e ativaçâo*/

  // Condicional para retrair o varal
  if (pinRainsensor < 800 && switchCursor = 1 ){

    digitalWrite(pinMot1A, HIGH);
    digitalWrite(pinMot1B, LOW);
    digitalWrite(pinMot2A, HIGH);
    digitalWrite(pinMot2B, LOW);

  }else{

    digitalWrite(pinMot1A, LOW);
    digitalWrite(pinMot1B, LOW);
    digitalWrite(pinMot2A, LOW);
    digitalWrite(pinMot2B, LOW);



  }
  
  
  // Condicional para expor o varal ao sol
 if (pinRainsensor > 800 && switchCursor2 = 1 ){
    
    digitalWrite(pinMot1A, LOW);
    digitalWrite(pinMot1B, HIGH);
    digitalWrite(pinMot2A, LOW);
    digitalWrite(pinMot2B, HIGH);

    }else{

    digitalWrite(pinMot1A, LOW);
    digitalWrite(pinMot1B, LOW);
    digitalWrite(pinMot2A, LOW);
    digitalWrite(pinMot2B, LOW);



    }
}
