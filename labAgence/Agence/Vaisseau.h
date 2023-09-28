#pragma once
#include <string>;
#include "Faction.h"

using std::string;


class Vaisseau
{
public:
	std::string nom;
	Faction* faction;
	int valeurMarchande;
	int vie;
	int defense;
	int attaque;
	int capacite;
	int niveau;
	int exp;


	Vaisseau(Faction* _faction);
	Vaisseau();
	~Vaisseau();


	int getAtt();
	int getDeff();
	int getVie();


	std::string virtual to_string();
};

