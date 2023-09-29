#pragma once
#include<vector>
#include"Quete.h"
#include <iostream>

class Aventurier
{
public:
	int niveau;
	std::vector<Quete*> tabQuete;

	Aventurier(int niv);
	~Aventurier();

	void AfficherQuete();
	void AjouterQuete(Quete* quete);
	int getNiv();

};

