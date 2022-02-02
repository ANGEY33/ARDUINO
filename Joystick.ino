const int pinBoton = 3; 
const int pinEjeY = A1; 
const int pinEjeX = A0; 
int valorActualEjeX;
int valorActualEjeY;
int valorAnteriorEjeX;
int valorAnteriorEjeY;
bool encenderLed;
int valorDeMovimiento = 10;
 
void setup() {
  pinMode(pinBoton, INPUT);
  digitalWrite(pinBoton, HIGH);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  valorActualEjeX = analogRead(pinEjeX);
  Serial.print("Boton:  ");
  Serial.print(digitalRead(pinBoton));
  Serial.print("\n");
  Serial.print("Eje X: ");
  Serial.print(valorActualEjeX);
  Serial.print(valorAnteriorEjeX);
  Serial.print("\n"); //esto es un salto de linea
  Serial.print("Eje Y: ");
  Serial.println(analogRead(pinEjeY));
  Serial.print("\n\n");
  delay(150);
  if ((valorActualEjeX - valorAnteriorEjeX > valorDeMovimiento) || (valorActualEjeY - valorAnteriorEjeY > valorDeMovimiento)){
    encenderLed = true; 
  }
  else {
    encenderLed = false;
  }

  
  if (encenderLed) {
    digitalWrite(8, HIGH);
    Serial.println("Encendiendo Led");
  }
  else {
    digitalWrite(8, LOW);
  }
  valorAnteriorEjeX=valorActualEjeX;
}
