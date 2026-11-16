#pragma once

#include "reserves/Reserve.h"

class DistributeurEau {
public:
    explicit DistributeurEau(Reserve& eau);

private:
    Reserve& eau_;
};
