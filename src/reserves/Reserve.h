#pragma once

#include "reserves/Sujet.h"

#include <string>

class Reserve : public Sujet {
public:
    // ex. Reserve("vert", "Thé vert", "de thé vert", "g", 20, 10)
    Reserve(std::string identifiant, std::string nom, std::string complement,
            std::string unite, double quantite, double seuil);

private:
    std::string identifiant_;
    std::string nom_;
    std::string complement_;
    std::string unite_;
    double quantite_;
    double seuil_;
};
