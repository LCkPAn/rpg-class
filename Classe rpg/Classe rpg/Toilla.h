#pragma once
#include "Profs.h"

class Toilla : public Profs
{
private:
	vector<int>rep = { 2, 0 ,1  };
	string collect = "Flasque de Whiskey";
	vector<string> Alliot =
	{
		//Alliot

		//Début de combat
		"Hi, everyone, comment ça va aujourd’hui ?",

		//PunchLâcher pas les gars on arrive dans le dur
		"N’hésite pas à t’abonner à mon instragram",
		"La douceur de caractère qui naît de la simplicité de l'insouciance, n'est point vertu de Zzzzzzzzz…",
		"nik toi lucas",

		//fin de combat
		"T’aurais pas une clope à dépanner, au fait ?",

		//Questions
		"Une boucle de jeu c’est: ",
		"L’auteur de l’anatomie de scénario est: ",
		"La notion la plus importante dans un jeu est:",


		//Réponses
		"- Le new game+",
		"- Objectif, challenge, récompense",
		"- Les câbles qui se sont emmêlés derrière ma Super Nes et mon écran cathodique",

		"- Xavier Alliot",
		"- John Truby",
		"- Chuck Norris",

		"- La narration",
		"- Le fun",
		"- Les boobs",
	};

public:
	string getCollect();
	int getRep(int r);
	Toilla();
	Toilla(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier

	string getTab(int a);

	void special(Personnage& enemy);

	friend ostream& operator<<(ostream& os, Toilla const& p);

	
};

