/******************************************************************
 * Um Projeto bem simples, seguindo a ideia dos anteriores. 
 * com o push button nós selecionamos a cor, e com a cor desejada
 * selecionada podemos mudar sua intensidade tanto do vermelho, 
 * verde e azul. Assim conseguimos qualquer cor da tabela RGB
 ******************************************************************/
int bt = 7;            //Botão
int leitura = 0;      //leitura do potenciometro
int ledR = 9;           
int ledG = 10;        //pinos do led RGB
int ledB = 11;
int contador = 0;     //memoriza a cor que estamos
int intensidade = 0;  //intensidade da luz led
int pbt = 0;          //botão pressionado

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(bt, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  leitura = (analogRead(A5));

  intensidade = map(leitura, 0, 1023, 0, 255);
  
  pbt = digitalRead(bt);
  if(pbt==HIGH){
    if(contador<3){
      contador++;                        //contador bem simples, que "zera" a partir do 3.
      delay(500);         
    }else{
      contador = 1;
      delay(500);
    }
  }
  switch(contador){
    case 1:
      analogWrite(ledR, intensidade);
      break;
    case 2:
      analogWrite(ledG, intensidade);     //Apenas seleciona a cor
      break;
    case 3:
      analogWrite(ledB, intensidade);
      break;
  }
  
  Serial.println(intensidade);

} 
