#pragma once

#include "composants/ChambreInfusion.h"
#include "composants/DistributeurEau.h"
#include "composants/DistributeurThe.h"
#include "composants/SystemeChauffage.h"
#include "profils/Besoins.h"

#include <string>

class ProfilInfusion {
public:
    ProfilInfusion(std::string nomThe, double grammes, double volumeService,
                   double temperature, double dureeInfusion);

protected:
    std::string nomThe_;
    double grammes_;
    double volumeService_;
    double temperature_;
    double dureeInfusion_;
};
