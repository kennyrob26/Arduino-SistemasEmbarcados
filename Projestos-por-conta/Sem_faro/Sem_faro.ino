int ledg = 2; //led verde
int ledr = 3;//led vermelho
int ledy = 4;//led Amarelo
void setup() {
  pinMode(ledg, OUTPUT);
  pinMode(ledr, OUTPUT);
  pinMode(ledy, OUTPUT);
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledg, HIGH);
digitalWrite(ledy, LOW);   //Sinal verde
digitalWrite(ledr, LOW);
delay(5000);
digitalWrite(ledg, LOW);
digitalWrite(ledr, LOW);  //Sinal Amarelo
digitalWrite(ledy, HIGH);
delay(1000);
digitalWrite(ledg, LOW);
digitalWrite(ledy, LOW);  //Sinal Vermelho
digitalWrite(ledr, HIGH);
delay(5000);
}
