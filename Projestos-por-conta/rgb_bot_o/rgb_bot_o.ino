int acionado = 0; // botão pressionado
int bt = 6;        //botão  
int ledR = 9;      //Vermelho
int ledG = 11;     //Verde
int ledB = 10;     //azul
int cor = 0;

int lRgb(int red, int green, int blue)
{
  analogWrite(ledR, red);
  analogWrite(ledG, green);
  analogWrite(ledB, blue);
} 

void setup() {
  // put your setup code here, to run once:
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(bt, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  //Condições simples que incrementa 1 a variável cor, e também limita a quantidade de cores (nesse caso é 3 + desligado)
  acionado = digitalRead(bt);
  if(cor <4){
    if(acionado == HIGH){
      cor++;
      delay(500);            //o delay é necessário pois apenas um toque no botão pode adicionar dezenas de números, e também limita a troca de cores caso o usuário segure o botão
      Serial.println(cor);   //monitorar a incrementação da variável cor
    }
  }else{
    cor = 0;                 //reseta a cor
  }
  switch(cor){
    case 1:
      lRgb(0,0,0);
      break;
    case 2:
      lRgb(255,0,0);
      break;
    case 3: 
      lRgb(0,255,0);
      break;
    case 4:
      lRgb(0,0,255);
      break;
  }
  
}
