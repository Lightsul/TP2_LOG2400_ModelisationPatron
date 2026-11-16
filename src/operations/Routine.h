#pragma once

#include "operations/IterateurRoutine.h"
#include "operations/Operation.h"

#include <memory>
#include <string>
#include <vector>

class Routine : public Operation {
public:
    explicit Routine(std::string nom);

private:
    std::string nom_;
};
