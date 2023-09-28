#include "Vaisseau.h"

Vaisseau::Vaisseau(Faction* _faction)
{
	faction = _faction;
}

Vaisseau::Vaisseau()
{

}

Vaisseau::~Vaisseau()
{

}

std::string Vaisseau::to_string()
{

	std:string info = "";
	info.append("Vie : " + std::to_string(this->vie) + " \n");
	info.append("Defense : " + std::to_string(this->defense) + " \n");
	info.append("Attaque : " + std::to_string(this->attaque) + " \n");
	info.append("Capacite : " + std::to_string(this->capacite) + " \n");
	info.append("Niveau : " + std::to_string(this->niveau) + " \n");
	info.append("Experience : " + std::to_string(this->exp) + " \n");
	info.append("Valeur au marcher : " + std::to_string(this->valeurMarchande) + " \n");
	return info;
}

int Vaisseau::getAtt() { return attaque; }
int Vaisseau::getDeff() { return defense; }
int Vaisseau::getVie() { return vie; }
