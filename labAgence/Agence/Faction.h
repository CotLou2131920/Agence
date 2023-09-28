#pragma once
#include<string>;


using std::string;
class Faction
{
public:
	std::string nom;
	int attaque;
	int deffense;
	int vie;
	int capacite;


	Faction();
	Faction(std::string nom ,int att, int def, int vie, int capacite);
	~Faction();

	std::string getNom();
	std::string virtual to_string();
};

