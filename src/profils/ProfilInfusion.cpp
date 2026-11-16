#include "profils/ProfilInfusion.h"

#include <utility>

ProfilInfusion::ProfilInfusion(std::string nomThe, double grammes, double volumeService,
                               double temperature, double dureeInfusion)
    : nomThe_(std::move(nomThe))
    , grammes_(grammes)
    , volumeService_(volumeService)
    , temperature_(temperature)
    , dureeInfusion_(dureeInfusion)
{
}
