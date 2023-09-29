#pragma once
#include<string>
class Quete
{

public:
	enum nivDficulte
	{
		Facile,
		Moyen,
		Difficile
	};


	nivDficulte niveau;
	std::string nom;
	int nivMin;
	int recompenseOr;
	int expRecu;


	Quete(nivDficulte niveau, std::string nom, int nivMin, int recompenseOr, int expRecu);
	~Quete();

	nivDficulte getDifficulte();
	int getNivMin();
	int getRecompense();
	int getExp();

	std::string virtual to_string();

};


