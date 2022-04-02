#pragma once
#include "Profs.h"

class Toilla : public Profs
{
private:
	string collect = "Flasque de Whiskey";
	vector<string> Alliot =
	{
		//Alliot

		//Questions
		"Une boucle de jeu c’est: ",
		"L’auteur de l’anatomie de scénario est: ",
		"La notion la plus importante dans un jeu est:",


		//Réponses
		"- Objectif, challenge, récompense",
		"- Les câbles qui se sont emmêlés derrière ma Super Nes et mon écran cathodique",
		"- Le new game+",

		"- John Truby",
		"- Chuck Norris",
		"- Xavier Alliot",

		"- Le fun",
		"- Les boobs",
		"- La narration"
	};

public:
	Toilla();
	Toilla(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier

	string getTab(int a);

	void Ronpiche();

	friend ostream& operator<<(ostream& os, Toilla const& p);

	
};

