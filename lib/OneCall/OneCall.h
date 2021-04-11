#pragma once
#include "OneCallData.h"
#include <Arduino.h>

class OneCall
{
    public:
        OneCall(const char *appId);
        bool update(OneCallData *data, float lat, float lng);
    private:
        const char *host = "api.openweathermap.org";
        const unsigned short port = 443;
        const char *appId;
};
