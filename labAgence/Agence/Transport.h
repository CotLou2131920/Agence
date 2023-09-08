#pragma once
#include "Vaisseau.h"
class Transport :
	public Vaisseau
{

public:
	Transport();
	~Transport();

	std::string virtual to_string();
};

