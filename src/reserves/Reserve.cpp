#include "reserves/Reserve.h"

#include "util/Format.h"

#include <utility>

Reserve::Reserve(std::string identifiant, std::string nom, std::string complement,
                 std::string unite, double quantite, double seuil)
    : identifiant_(std::move(identifiant))
    , nom_(std::move(nom))
    , complement_(std::move(complement))
    , unite_(std::move(unite))
    , quantite_(quantite)
    , seuil_(seuil)
{
}
