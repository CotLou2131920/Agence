// ExamenPratique.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include <iostream>
#include "Factory.h"
#include "Aventurier.h"
int main()
{
	Aventurier* vincent = new Aventurier(38);

	for (int i = 0; i < 12; i++)
	{
		Quete* quete = Factory::getRandomQuete();
		if (quete->getNivMin() <= vincent->getNiv())
			vincent->AjouterQuete(quete);
		else
		{
			delete quete;
		}
	}
	vincent->AfficherQuete();

	for (auto i : vincent->tabQuete)
	{
		delete* vincent->tabQuete.begin();
		vincent->tabQuete.erase(vincent->tabQuete.begin());
	}

	delete vincent;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
