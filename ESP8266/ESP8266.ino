#include <HCSR04.h>
#include <Stepper.h>
#include "iot.h"
#include "stats.h"

/***********************************************************/

#define PORCAO 3              // <-- Porcões por dia para cada gato
#define INTERVALO 1         // <-- Intervalo entre porções (em minutos)
#define GATOS 1

#define TriggerResevatorio D1            
#define EchoResevatorio D2              
#define TriggerComedouro D3          
#define EchoComedouro D4              

#define A D5          
#define B D6         
#define C D7
#define D D8           

#define REVOLUTION 2038

/************************************************************/

const char* WIFI = "eee";
const char* SENHA = "12345678";

unsigned long tm_eat = 0;
unsigned long tm_reset = 0;

int cota_diaria;
bool old_eat = false, now_eat = true;

HCSR04 _Resevatorio(TriggerResevatorio, EchoResevatorio);
HCSR04 _Comedouro(TriggerComedouro, EchoComedouro);

Stepper Engine(REVOLUTION,A,C,B,D);
STATS Info;
IOT iot(WIFI, SENHA);

void setup() {
  Serial.begin(115200);
  iot.webStart();
  Engine.setSpeed(15);
  Info.setAlturaComedouro(getComedouro());
  cota_diaria = GATOS*PORCAO;
}

void loop() {
  Info.lerSensores(getResevatorio(), getComedouro());
  iot.spy(Info);
  iot.web(Info);
  Serial.print(iot.serial(Info));
  
  eat();
  if(iot.getAction()) action();
  resetInfo();
}

void eat(){
  if((millis() - tm_eat >= (INTERVALO/GATOS)*60000) and cota_diaria != 0){
    tm_eat = millis();
    Engine.step(-REVOLUTION/4);
    cota_diaria--;
  }
}

void action(){
    Engine.step(-REVOLUTION/4);
}

void resetInfo(){
  if(millis() - tm_reset >= 86400000){
    tm_reset = millis();
    cota_diaria = GATOS*PORCAO;
    Info.resetInfo();
  }
}

float getComedouro(){
  return _Comedouro.dist();
}

float getResevatorio(){
  return _Resevatorio.dist();
}
