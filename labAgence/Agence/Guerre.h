#pragma once
#include "Vaisseau.h"
class Guerre :
    public Vaisseau
{
public:
    Guerre();
    ~Guerre();

    std::string virtual to_string();
};

