#include "Factory.h"


Factory::Factory()
{

}

Factory::~Factory()
{

}

int Factory::genererNB(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

Quete* Factory::getRandomQuete()
{
	int dificulte = genererNB(0, 100);
	if (dificulte <= 75)
		return new Quete(Quete::nivDficulte::Facile, "Quete Facile", genererNB(1, 10), genererNB(100, 1000), genererNB(100, 2000));
	else if (dificulte <= 90)
		return new Quete(Quete::nivDficulte::Moyen, "Quete Moyen", genererNB(10, 25), genererNB(1000, 5000), genererNB(2000, 4000));
	else
		return new Quete(Quete::nivDficulte::Difficile, "Quete Difficile", genererNB(25, 99), genererNB(5000, 35000), genererNB(4000, 14000));

}