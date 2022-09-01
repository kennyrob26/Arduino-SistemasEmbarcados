int ledR = 9;
int ledG = 11;
int ledB = 10;

int ledRgb(int r, int g, int b) //Uma função bem simples que recebe valores para R, G e B, e assim conseguimos gerar qualquer cor RGB.
{
  analogWrite(ledR, r);
  analogWrite(ledG, g);            
  analogWrite(ledB, b);
  
}
void setup() {
  // put your setup code here, to run once:
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:
  ledRgb(255,0,0); //vermelho
  delay(1500);
  ledRgb(0,255,0); //verde
  delay(1500);
  ledRgb(0,0,255); //azul
  delay(1500);
  
  //Para conseguir as cores desejada é só utilizar uma tabela RGB facilmente encontrada na internet
  
  ledRgb(255,255,0); //amarelo
  delay(1500);
  ledRgb(255,255,255); //branco
  delay(1500);
 
  
}
