#include "composants/DistributeurThe.h"

#include "reserves/Reserve.h"
#include "util/Format.h"

#include <iostream>

DistributeurThe::DistributeurThe(GestionnaireReserves& reserves)
    : reserves_(reserves)
{
}
