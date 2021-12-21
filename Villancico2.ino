

int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
const int buttonPin=6;
const int pinAltavoz = 8;
const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
const int duracionNegra = 667;

void setup(){
  
  
  pinMode(buttonPin, INPUT);
}


void loop(){
    checkButton();
 if (play) {
    tocarMelodia();
  }
  

}

/*
 * Funcion para tocar una melodia
 */
void tocarMelodia(){
  tocarMelodia(1,0.5);
  tocarMelodia(3,2);
tocarMelodia(-1,1);       
  }

void tocarMelodia(int numeroNota, float duracionNota) {
  int pin = pinAltavoz;
  int duracionMilisegundos = duracionNegra * duracionNota;
  //
  if (numeroNota == -1){
    //tocar en solencio
    noTone(pin);
    delay(duracionMilisegundos);
  }
  else {
   //tocar una nota
   int frecuencia = freqs[numeroNota];


  tone(pin,frecuencia,duracionMilisegundos);
  delay(duracionMilisegundos); 
}
}


void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}

}
