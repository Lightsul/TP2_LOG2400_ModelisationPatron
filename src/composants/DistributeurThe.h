#pragma once

#include "reserves/GestionnaireReserves.h"

#include <string>

class DistributeurThe {
public:
    explicit DistributeurThe(GestionnaireReserves& reserves);

private:
    GestionnaireReserves& reserves_;
};
