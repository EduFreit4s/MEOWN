#ifndef STATS_H
#define STATS_H

#define VELOCIDADE_LEITURA_RESERVATORIO 1000
#define VELOCIDADE_LEITURA_COMEDOURO 1000

#define ALTURA_RESERVATORIO 14 // EM CENTIMETROS

#include "Arduino.h"


class STATS {

    public:

      STATS();
      
      void lerSensores(float resevatorio, float comedouro);
      void setNivel(float resevatorio);
      void setVezes(float comedouro);
      void setTempo(float comedouro);
      void setAlturaComedouro(float comedouro);
      void resetInfo();
      
      
      
      float getAlturaComedoro();
      
  
      String getNivel();
      int getVezes();
      int getTempo();
      
    private:
    
      float _AlturaComedouro;
      int _vezes = 0, _tempo = 0;
      String _nivel;
      
      unsigned long tmM = 0;      
     
};




#endif
