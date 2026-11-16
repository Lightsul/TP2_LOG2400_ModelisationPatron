#pragma once

#include "profils/ProfilInfusion.h"

#include <string>

class ProfilInfusionRincage : public ProfilInfusion {
public:
    ProfilInfusionRincage(std::string nomThe, double grammes, double volumeService,
                          double temperature, double dureeInfusion, double volumeRincage);

private:
    double volumeRincage_;
};
