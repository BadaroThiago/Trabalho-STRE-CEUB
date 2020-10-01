/*Trabalho Pratico de Sistemas em Tempo Real e Embarcados
Grupo: Thiago Oliveira, Gabriel Arantes, Phillipy Ferreira e Leonardo Siqueira
Referências:
http://www.arduino.cc/en/Tutorial/LiquidCrystal
*/


// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//Inicializa variáveis do Termômetro
float p_chuva = 0.00, v_umh = 0.00, v_tmp = 0.00;
int umh = A0, tmp = A1;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  //Inicializa Termometro e Medidor de Humidade
  pinMode(tmp,INPUT);
  pinMode(umh,INPUT);

}

void loop() {
  int contador=0;
  while(true)
  {
    switch (contador % 3) {
      case 0:
        // Temperatura
      temperatura();
        break;
      case 1:
        // Umidade
      umidade();
        break;
      case 2:
        // Chance de Chuva
      prob_chuva();
        break;
    }
    delay(1000);
    lcd.clear();
    delay(500);
    contador++;
  }
}

void umidade(){
  v_umh = analogRead(hmh);
  v_umh = map(v_umh,0,1023,0,100);
  lcd.print("Umidade");
  lcd.setCursor(0,1);
  lcd.print("Umh:");
  lcd.print(v_umh);
}

void temperatura(){
  v_tmp = analogRead(tmp)*0.004882814;
  v_tmp = (v_tmp - 0.5) * 100.0;
  lcd.print("Termometro");
  lcd.setCursor(0,1);
  lcd.print("Tmp:");
  lcd.print(v_tmp);
}

void prob_chuva(){
  p_chuva = 0.00;
  if(v_umh > 70.00 && v_tmp > -4 && v_tmp < 10){    
      p_chuva = 20.00;
  }
  else if(v_umh > 70.00 && v_tmp >= 10 && v_tmp < 23){
    p_chuva = 40.00;
  }
  else if(v_umh > 70.00 && v_tmp >= 23 && v_tmp < 30){
    p_chuva = 60.00;
  }
  else if(v_umh > 70.00 && v_tmp >= 30){
    p_chuva = 80.00;
  }
  lcd.print("Chance de chuva");
  lcd.setCursor(0,1);
  lcd.print(p_chuva);
  lcd.print("%");
}
