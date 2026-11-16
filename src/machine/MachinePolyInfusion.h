#pragma once

#include "composants/ChambreInfusion.h"
#include "composants/DistributeurEau.h"
#include "composants/DistributeurThe.h"
#include "composants/FabriqueComposants.h"
#include "composants/SystemeChauffage.h"
#include "machine/Reglages.h"
#include "operations/CatalogueRoutines.h"
#include "operations/Historique.h"
#include "profils/ProfilInfusion.h"
#include "reserves/AlerteEcran.h"
#include "reserves/GestionnaireReserves.h"
#include "reserves/NotificationDistante.h"

#include <map>
#include <memory>
#include <string>

class MachinePolyInfusion {
public:
    explicit MachinePolyInfusion(const FabriqueComposants& fabrique);
};
