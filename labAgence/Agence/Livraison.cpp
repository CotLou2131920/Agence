#include "Livraison.h"

Livraison::Livraison() : Vaisseau(10, 4, 1, 10, 0, 0, 500)
{




}

Livraison::~Livraison() {}

std::string Livraison::to_string()
{
	std::string info = "";
	info.append("Type : Livraison \n");
	info.append("nom : Vincent \n");
	info += Vaisseau::to_string();

	return info;

}
