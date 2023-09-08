#pragma once
#include "Vaisseau.h"
class Livraison :
    public Vaisseau
{
public:
    Livraison();
    ~Livraison();

    std::string virtual to_string();
};

