 const int switchPin = 3;
const int motorPin = 8;
int switchState = 0;
void setup() {

    pinMode(motorPin, OUTPUT);
    pinMode(switchPin, INPUT);

}
void loop() {

    switchState = digitalRead(switchPin);

    if (switchState == HIGH) {
        digitalWrite(motorPin, HIGH);

    }
    else {
        digitalWrite(motorPin, LOW);

    }

}
