#pragma once
#include "Quete.h"
class Factory
{
public:
	Factory();
	~Factory();
	static Quete* getRandomQuete();
	static int genererNB(int min, int max);

};

