#include "Station.h"
#include "FactoryVaisseau.h"
#include "Mission.h"

Station::Station()
{
	capMax = 5;
	platinumDisponinible = 0;
	vieStation = 10000;
	missions = GenereMission();
}

Station::~Station()
{

}

void Station::init()
{
	for (int i = 0; i < 3; i++)
		vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
}

int Station::CheckMissionFini()
{
	for (auto mis : missions)
		if (mis->etat == 2)
		{
			return mis->platinum;
		}
	
	return 0;
	
}

void Station::CheckMissionDispo()
{
	for (auto mis : missions)
		if (mis->etat == 0)
		{
			mis->etat + 1;
		}
}

void Station::CheckMissionEnCours()
{
	for (auto mis : missions)
		if (mis->etat == 1 and mis->distance == 0)
		{
			mis->etat + 1;
		}
}

std::list<Mission*> Station::GenereMission()
{
	int max;
	if (capMax == 5)
		max = 3;
	else
		max = 4;
	
	std::list<Mission*> Missions;
	for (int i = 0; i < capMax; i++)
	{
		int objMission = (rand() % (max - 1 + 1)) + 1;
		Missions.push_back(ObjectifMission(objMission));
	}
	return Missions;
}

Mission* Station::ObjectifMission(int mission)
{
	switch (mission)
	{
	case 1: return new Mission("Aller sauver une planet", 8, 2, 2, 5, 500, 1000);
	case 2: return new Mission("Piller un vaisseaux abandoné", 8, 2, 2, 5, 500, 1000);
	case 3: return new Mission("Attaquer un vaisseaux enemie", 8, 2, 2, 5, 500, 1000);
	case 4: return new Mission("Aller a la rencontre de Dieux", 8, 2, 2, 5, 500, 1000);
	
	}

}


std::vector<Vaisseau*> Station::getVaisseauDispo() { return vecVaisseau; }

void Station::ajouterVaisseau(Vaisseau* vaisseau) { vecVaisseau.push_back(vaisseau); }
