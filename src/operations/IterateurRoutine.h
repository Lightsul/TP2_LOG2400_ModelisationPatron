#pragma once

#include <cstddef>
#include <utility>
#include <vector>

class Operation; // déclaration anticipée : évite une inclusion circulaire avec Routine.h

class IterateurRoutine {
public:
    explicit IterateurRoutine(const Operation& racine);
};
