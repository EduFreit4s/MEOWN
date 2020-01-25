#ifndef IOT_H
#define IOT_H


#include "stats.h"
#include "Arduino.h"
#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>


class IOT {

    private:

        HTTPClient _http;
        
        const char* _SSID;
        const char* _PASS;

        bool _mode = false;
    
    public:

        IOT(const char* ssid, const char* key);
        bool wifi();
        void spy(STATS temp);
        bool getAction();
        
        void tradutor(String spy);
        String serial(STATS temp);
        void web(STATS temp);  

};

#endif
