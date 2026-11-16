#pragma once

#include "machine/Reglages.h"
#include "operations/Operation.h"

#include <string>

class ChangementPortions : public Operation {
public:
    ChangementPortions(Reglages& reglages, int portions);

private:
    Reglages& reglages_;
    int nouvellesPortions_;
};
