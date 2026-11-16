#include "profils/ProfilInfusionRincage.h"

#include <utility>

ProfilInfusionRincage::ProfilInfusionRincage(std::string nomThe, double grammes,
                                             double volumeService, double temperature,
                                             double dureeInfusion, double volumeRincage)
    : ProfilInfusion(std::move(nomThe), grammes, volumeService, temperature, dureeInfusion)
    , volumeRincage_(volumeRincage)
{
}
