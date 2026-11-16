#pragma once

#include "machine/Reglages.h"
#include "operations/Operation.h"

#include <string>

class ChangementSelection : public Operation {
public:
    ChangementSelection(Reglages& reglages, std::string the);

private:
    Reglages& reglages_;
    std::string nouveauThe_;
};
