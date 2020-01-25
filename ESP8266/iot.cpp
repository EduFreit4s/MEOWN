#include "iot.h"

const String SERVIDOR = "https://meown-engine.herokuapp.com/upload";

const String COMIDA = "\"COMIDA\":";
const String VEZES = "\"VEZES\":";
const String TEMPO = "\"TEMPO\":";
const String ACAO = "\"ACAO\":";

IOT::IOT(const char* ssid,const char* key){
    _SSID = ssid;
    _PASS = key;
}

bool IOT::webStart(){

    WiFi.begin(_SSID, _PASS);
    delay(5000);

    if(WiFi.status() != WL_CONNECTED){
      return false;
    }else{
      return true;
    }  
}


void IOT::spy(STATS temp){

  if(Serial.available() > 0 ){
    String spy = Serial.readString();
    tradutor(spy);  
  }    
}

void IOT::tradutor(String spy){
   if(spy.startsWith("{") and spy.endsWith("}")){
        if(spy.indexOf(ACAO + "1") > 0){
          _mode = true;
        }
         if(spy.indexOf(ACAO + "0") > 0){
          _mode = false;
        } 
    }
}

void IOT::setModeFalse(){
  _mode = false;
}


String IOT::serial(STATS temp){
  
  String nivel = temp.getNivel();
  int vezes = temp.getVezes();
  int tempo = temp.getTempo();

  return "{" + COMIDA + String(nivel) + "," + VEZES + String(vezes) + "," + TEMPO + String(tempo) + "}";  
}

void IOT::web(STATS temp){
  
  String nivel = temp.getNivel();
  int vezes = temp.getVezes();
  int tempo = temp.getTempo();

  String webjson = "{" + COMIDA + String(nivel) + "," + VEZES + String(vezes) + "," + TEMPO + String(tempo) + "}";  

    _http.begin(SERVIDOR); 
    _http.addHeader("Content-Type", "application/json"); 
    _http.POST(webjson); 
    _http.end();  
}

bool IOT::getAction(){
  return _mode;
}
