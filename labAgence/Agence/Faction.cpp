#include "Faction.h"

Faction::Faction(std::string nom, int att, int deff, int vie, int capacite)
{
	this->nom = nom;
	attaque = att;
	deffense = deff;
	this->vie = vie;
	this->capacite = capacite;
	
}

Faction::Faction()
{


}


std::string Faction::getNom() { return nom; }

Faction::~Faction() {}

std::string Faction::to_string()
{
	return nom;
}