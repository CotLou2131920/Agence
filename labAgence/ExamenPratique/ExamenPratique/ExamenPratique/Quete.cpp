#include "Quete.h"


Quete::Quete(nivDficulte _niveau, std::string _nom, int _nivMin, int _recompenseOr, int _expRecu)
{
	niveau = _niveau;
	nom = _nom;
	nivMin = _nivMin;
	recompenseOr = _recompenseOr;
	expRecu = _expRecu;
}

Quete::~Quete()
{

}


Quete::nivDficulte Quete::getDifficulte() { return niveau; }
int Quete::getNivMin() { return nivMin; }
int Quete::getRecompense() { return recompenseOr; }
int Quete::getExp() { return expRecu; }

std::string Quete::to_string()
{
	std::string info;
	info = nom + "\n" +
		"Niveau Minimum : " + std::to_string(nivMin) + "\n" +
		"Recompensee :" + std::to_string(recompenseOr) + "\n" +
		"Experience :" + std::to_string(expRecu) + "\n\n";
	return info;
}

