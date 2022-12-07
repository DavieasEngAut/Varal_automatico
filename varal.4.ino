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

int var1=1;
int var2=1;

// Pinos Motor Varal 1
#define pinMot1A 10 
#define pinMot1B 9

// Pinos Motor Varal 2
#define pinMot2A 5
#define pinMot2B 6

//Definiçao do pino pwm velocidade
#define velocidade 11


void setup(){

    Serial.begin(9600);

    pinMode(velocidade, OUTPUT);

    //Set dos pinos do Sensor fim de curso para receberem energia
    pinMode(switchCursor, INPUT_PULLUP);
    pinMode(switchCursor2, INPUT_PULLUP);
  

  // Deixando os pinos dos motores para soltarem energia
    pinMode(pinMot1A, OUTPUT);
    pinMode(pinMot1B, OUTPUT);
    pinMode(pinMot2A, OUTPUT);
    pinMode(pinMot2B, OUTPUT);

  analogWrite(velocidade, 100);

}

void loop(){

//Captura Valores sensor de chuva 
    valorSensor = analogRead(pinRainsensor);
    Serial.println(valorSensor);

  // Condicional para retrair o varal
 if ((valorSensor < 800) && (var1==1)){

    digitalWrite(pinMot1A, LOW);
    digitalWrite(pinMot1B, HIGH);
    digitalWrite(pinMot2A, LOW);
    digitalWrite(pinMot2B, HIGH);

    delay(2000);
    
    digitalWrite(pinMot1A, LOW);
    digitalWrite(pinMot1B, LOW);
    digitalWrite(pinMot2A, LOW);
    digitalWrite(pinMot2B, LOW);

    var1=0;
    var2=1;
  }
  
  if ((valorSensor > 800) && (var2==1)){

    digitalWrite(pinMot1A, HIGH);
    digitalWrite(pinMot1B, LOW);
    digitalWrite(pinMot2A, HIGH);
    digitalWrite(pinMot2B, LOW);

    delay(2000);
    
    digitalWrite(pinMot1A, LOW);
    digitalWrite(pinMot1B, LOW);
    digitalWrite(pinMot2A, LOW);
    digitalWrite(pinMot2B, LOW);

    var2=0;
    var1=1;
  }
}
