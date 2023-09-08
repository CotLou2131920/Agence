#include "Transport.h"

Transport::Transport() : Vaisseau(8,5,3,10,0,0,1000)
{




}

Transport::~Transport() {}

std::string Transport::to_string()
{
	std::string info = "";
	info.append("Type : Transport \n");
	info.append("nom : Vincent \n");
	info += Vaisseau::to_string();

	return info;
}
