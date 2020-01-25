#include "stats.h"

STATS::STATS(){}

void STATS::lerSensores(float resevatorio, float comedouro){
  setNivel(resevatorio);
  setVezes(comedouro);
  setTempo(comedouro);
}

void STATS::setAlturaComedouro(float comedouro){
  _AlturaComedouro = comedouro;
}

void STATS::setNivel(float resevatorio){
    if(resevatorio >= 6 and resevatorio <= 8){
      _nivel = "Cheio";
    }else if(resevatorio > 8 and resevatorio <= 10){
      _nivel = "Mais da metade"; 
    }else if(resevatorio > 10 and resevatorio <= 12){
      _nivel = "Menos da metade"; 
    }else if(resevatorio > 12 and resevatorio <= 14){
      _nivel = "Quase vazio"; 
    }else{
      _nivel = "Vazio";
    }
}

void STATS::setVezes(float comedouro){

  bool estado = false;
  bool estado_anterior = false;
  
    if(comedouro <= (_AlturaComedouro - 5)){
      estado = true; 
    }else{
      estado = false;
    }
   
    if(estado and !estado_anterior) _vezes++;
    estado_anterior = estado;
}

void STATS::setTempo(float comedouro){
  if(comedouro <= (_AlturaComedouro - 5)){
    if(millis() - tmM >= 1000){
      tmM = millis();
      _tempo++;
    }
  }
}

void STATS::resetInfo(){
  _tempo = 0;
  _vezes = 0;
}

String STATS::getNivel(){
  return _nivel;
}

int STATS::getVezes(){
  return _vezes;
}

int STATS::getTempo(){
  return _tempo;
}
