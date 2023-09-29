#include "Aventurier.h"

Aventurier::Aventurier(int _niv)
{
	niveau = _niv;
}

Aventurier::~Aventurier()
{

}

void Aventurier::AfficherQuete()
{
	for (auto q : tabQuete)
		std::cout << q->to_string();
}

void Aventurier::AjouterQuete(Quete* quete) { tabQuete.push_back(quete); }

int Aventurier::getNiv() { return niveau; }