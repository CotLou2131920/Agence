#include "Station.h"
#include "FactoryVaisseau.h"

Station::Station()
{
	capMax = 5;
	platinumDisponinible = 0;
	vieStation = 10000;
}

Station::~Station()
{

}

void Station::init()
{
	for (int i = 0; i < 3; i++)
		vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
}

std::list<Mission> Station::GenereMission()
{
	int max;
	if (capMax == 5)
		max = 3;
	else
		max = 4;
	
	std::list<Mission> Missions;
	for (int i = 0; i < capMax; i++)
	{
		int objMission = (rand() % (max - 1 + 1)) + 1;
		Mission mis = new Mission(ObjectifMission(objMission),)
	}

}

std::string Station::ObjectifMission(int mission)
{
	switch (mission)
	{
	case 1: return "Aller sauver une planet";
	case 2: return "Attaquer un vaisseaux enemie";
	case 3: return "Piller un vaisseaux abandoné";
	case 4: return "Aller a la rencontre de Dieux";
	
	}

}


std::vector<Vaisseau*> Station::getVaisseauDispo() { return vecVaisseau; }

void Station::ajouterVaisseau(Vaisseau* vaisseau) { vecVaisseau.push_back(vaisseau); }
