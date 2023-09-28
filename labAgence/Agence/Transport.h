#pragma once
#include "Vaisseau.h"
class Transport :
	public Vaisseau
{

public:
	Transport(Faction* faction);
	~Transport();

	std::string virtual to_string();
};

