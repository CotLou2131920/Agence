#include "FactoryVaisseau.h"
#include "Guerre.h"
#include "Transport.h"
#include "Livraison.h"
#include<string>;
#include<string>;




int FactoryVaisseau::genererNB(int min, int max)
{

	return (rand() % (max - min + 1)) + min;
}

Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	Vaisseau* vaisseau(0);
	Faction* maFaction = getRandomFaction();
	TypeVaisseau typeV = (TypeVaisseau)genererNB(0, 2);
	if (typeV == TypeVaisseau::GUERRE)
		vaisseau = new Guerre(maFaction);
	else if (typeV == TypeVaisseau::LIVRAISON)
		vaisseau = new Livraison(maFaction);
	else
		vaisseau = new Transport(maFaction);

	return vaisseau;
}

Faction* FactoryVaisseau::getRandomFaction()
{
	Faction* faction(0);
	int typeF = genererNB(0, 2);
	if (typeF == 0)
		faction = new Faction("Rouge", 5, 3, 4, 2);
	else if (typeF == 1)
		faction = new Faction("Bleu", 2, 5, 3, 4);
	else
		faction = new Faction("Jaune", 3, 4, 2, 5);

	return faction;
}

FactoryVaisseau::FactoryVaisseau()
{
}

FactoryVaisseau::~FactoryVaisseau()
{
}