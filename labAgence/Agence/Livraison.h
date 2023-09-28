#pragma once
#include "Vaisseau.h"
class Livraison :
    public Vaisseau
{
public:
    Livraison(Faction* faction);
    ~Livraison();

    std::string virtual to_string();
};

