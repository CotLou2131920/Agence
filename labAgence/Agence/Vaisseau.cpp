#include "Vaisseau.h"

Vaisseau::Vaisseau(int _vie, int _deff, int _att, int _capacite, int _niv, int _exp, int _valeur)
{
	vie = _vie;
	defense = _deff;
	attaque = _att;
	capacite = _capacite;
	niveau = _niv;
	exp = _exp;
	valeurMarchande = _valeur;
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
