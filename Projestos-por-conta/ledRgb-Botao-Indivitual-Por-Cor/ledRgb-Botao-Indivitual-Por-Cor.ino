int btR = 2;
int btG = 3;     //botões 
int btB = 4;
int ledR = 9;
/************************************************************
 * Simples projeto que possui 3 botões push, onde cada um 
 * acende uma cor do led RGB, tornando assim possível 
 * algumas simples combinações de cores
 ***********************************************************/

int ledG = 11;  //pinos vermelho, verde e azul do led rgb
int ledB = 10;
int pR = 0;
int pG = 0;     //pressionado de cada botão
int pB = 0;
int estadoR = 0;
int estadoG = 0;     //ligado ou desligado
int estadoB = 0;

//Função principal, responsável por criar os estados de ligado e desligado ( 0 e 1 respectivamente), e apartir do estado liga ou desliga o led.
void onLed(int led, int pressionado, int *contador){
  if(pressionado == HIGH && *contador == 0){
    *contador = 1;                                          
    delay(500);                                          //Define se ao apertarmos o botão vamos ligar, ou desligar aquela cor
    }else if(pressionado == HIGH){
     *contador = 0;
     delay(500);
    }
  if(*contador){
    analogWrite(led, 255);
  }else{                                                 //condição simples, que apenas liga ou desliga o led dependendo do estado do botão
    analogWrite(led, 0);
  }
    
}
void setup() {
  // put your setup code here, to run once:
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(btR, INPUT);
  pinMode(btG, INPUT);
  pinMode(btB, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  //pR = digitalRead(btR);
  pR = digitalRead(btR);
  pG = digitalRead(btG);
  pB = digitalRead(btB);
  onLed(ledR, pR, &estadoR);  
  onLed(ledG, pG, &estadoG);
  onLed(ledB, pB, &estadoB);


}
