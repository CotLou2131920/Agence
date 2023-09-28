#pragma once
#include "Vaisseau.h"
#include "Faction.h"


enum TypeVaisseau {
	GUERRE,
	TRANSPORT,
	LIVRAISON,

};

class FactoryVaisseau
{

public:
	static Vaisseau* getRandomVaisseau();
	static int genererNB(int min, int max);
	FactoryVaisseau();
	~FactoryVaisseau();

private:
	static Faction* getRandomFaction();

};

