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

		//D�but de combat
		"Hi, everyone, comment �a va aujourd�hui ?",

		//PunchL�cher pas les gars on arrive dans le dur
		"N�h�site pas � t�abonner � mon instragram",
		"La douceur de caract�re qui na�t de la simplicit� de l'insouciance, n'est point vertu de Zzzzzzzzz�",
		"nik toi lucas",

		//fin de combat
		"T�aurais pas une clope � d�panner, au fait ?",

		//Questions
		"Une boucle de jeu c�est: ",
		"L�auteur de l�anatomie de sc�nario est: ",
		"La notion la plus importante dans un jeu est:",


		//R�ponses
		"- Le new game+",
		"- Objectif, challenge, r�compense",
		"- Les c�bles qui se sont emm�l�s derri�re ma Super Nes et mon �cran cathodique",

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
	Toilla(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier

	string getTab(int a);

	void special(Personnage& enemy);

	friend ostream& operator<<(ostream& os, Toilla const& p);

	
};

