#pragma once
#include <string>;

using std::string;


class Vaisseau
{
public:
	std::string nom;
	int valeurMarchande;
	int vie;
	int defense;
	int attaque;
	int capacite;
	int niveau;
	int exp;


	Vaisseau(int vie, int deff, int att, int capacite, int niv, int exp, int valeur);
	~Vaisseau();


	int getAtt();
	int getDeff();
	int getVie();


	std::string virtual to_string();
};

