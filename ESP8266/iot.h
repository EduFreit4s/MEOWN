#ifndef IOT_H
#define IOT_H


#include "stats.h"
#include "Arduino.h"
#include <ArduinoJson.h>

#include <ESP8266HTTPClient.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureAxTLS.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureAxTLS.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>


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

        void setModeFalse();

        
        void tradutor(String spy);
        String serial(STATS temp);
        void web(STATS temp);  

};

#endif
