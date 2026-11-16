#include "operations/Routine.h"

#include <utility>

Routine::Routine(std::string nom)
    : nom_(std::move(nom))
{
}
