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
	std::list<Mission*> missions;


	Station();
	std::list<Mission*> GenereMission();
	Mission* ObjectifMission(int mission);
	~Station();
	int CheckMissionFini();
	void CheckMissionDispo();
	void CheckMissionEnCours();

	std::vector<Vaisseau*> getVaisseauDispo();
	void init();
	void ajouterVaisseau(Vaisseau* vaisseau);
};

