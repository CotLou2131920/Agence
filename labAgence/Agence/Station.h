#pragma once
#include <vector>
#include "Vaisseau.h"
#include "Mission.h"
#include <list>
#include<string>



class Station
{
	int platinumDisponinible;
	int vieStation;
	int capMax;
	std::vector<Vaisseau*>  vecVaisseau;


	Station();
	std::list<Mission> GenereMission();
	std::string ObjectifMission(int mission);
	~Station();

	std::vector<Vaisseau*> getVaisseauDispo();
	void init();
	void ajouterVaisseau(Vaisseau* vaisseau);
};

