//the button when clicked after plugged in D3 will activate a sound
//pin in D4 and a LED pin in D5
//Robertas Aleksandrovas
//Edited 03/02/22



const int buttonPin = 3;
const int soundPin = 4;
const int ledPin = 5;
int buttonState = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(soundPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH){
    digitalWrite(ledPin, HIGH);
    digitalWrite(soundPin, HIGH);
  }
   else{
    digitalWrite(ledPin, LOW);
    digitalWrite(soundPin, LOW);
   }
 }

