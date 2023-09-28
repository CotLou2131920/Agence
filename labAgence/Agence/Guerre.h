#pragma once
#include "Vaisseau.h"
class Guerre :
    public Vaisseau
{
public:
    Guerre(Faction* faction);
    ~Guerre();

    std::string virtual to_string();
};

