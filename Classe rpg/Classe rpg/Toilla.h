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
		"Une boucle de jeu c�est: ",
		"L�auteur de l�anatomie de sc�nario est: ",
		"La notion la plus importante dans un jeu est:",


		//R�ponses
		"- Objectif, challenge, r�compense",
		"- Les c�bles qui se sont emm�l�s derri�re ma Super Nes et mon �cran cathodique",
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
	Toilla(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier

	string getTab(int a);

	void Ronpiche();

	friend ostream& operator<<(ostream& os, Toilla const& p);

	
};

