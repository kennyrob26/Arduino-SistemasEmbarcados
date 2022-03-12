int pinG = 11; //Verde
int pinB = 10; //Azul
int pinR = 9;  //Vermelho
void setup() {
  // put your setup code here, to run once:
  pinMode(pinR, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinG, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Em analogWrite, no primeiro campo colocamos a cor, e no segundo a intensidade que varia de 0 a 255.
  analogWrite(pinR, 255);  //Vermelho
  delay(2000);
  analogWrite(pinR, 0);
  analogWrite(pinB, 255);  //Azul       
  delay(2000);
  analogWrite(pinB, 0);
  analogWrite(pinG, 255);  //Verde
  delay(2000);
  analogWrite(pinG, 0);
}
