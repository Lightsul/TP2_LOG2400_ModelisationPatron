#include "composants/DistributeurEau.h"

#include "util/Format.h"

#include <iostream>

DistributeurEau::DistributeurEau(Reserve& eau)
    : eau_(eau)
{
}
