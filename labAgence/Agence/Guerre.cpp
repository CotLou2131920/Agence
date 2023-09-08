#include "Guerre.h"

Guerre::Guerre() : Vaisseau(8, 5, 8, 2, 0, 0, 2000)
{




}

Guerre::~Guerre() {}


std::string Guerre::to_string()
{
	std::string info = "";
	info.append("Type : Guerre \n");
	info.append("nom : Vincent \n");
	info += Vaisseau::to_string();

	return info;

}
