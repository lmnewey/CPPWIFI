// got this example app from roughleaf seems handy, im trying to work in CPP 
// which makes the normal libraries a pain


#include <string>
#include <iostream>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "nvs_flash.h"

#include "wifi.h"

class CPPWifi final
{
private:
public:
    void run(void);
    void setup(void);
    void startWifiLoop()
    string password;
    string ssid;
    WIFI::Wifi::state_e wifiState { WIFI::Wifi::state_e::NOT_INITIALIZED };
    WIFI::Wifi Wifi;
};