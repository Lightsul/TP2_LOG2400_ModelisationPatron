#include "operations/ChangementSelection.h"

#include <iostream>
#include <utility>

ChangementSelection::ChangementSelection(Reglages& reglages, std::string the)
    : reglages_(reglages)
    , nouveauThe_(std::move(the))
{
}
