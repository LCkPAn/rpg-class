#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Personnage.h"

class Jouable: public Personnage
{
private:
	vector<string> Perso =
	{
		//Selection Perso

		//Questions
		"Tu te sens l��me d�un ?",
		"Si je te dis banane ?",
		"Ton jeu favoris ?",
		"Le cheveaux blanc d�henri 4 est :",
		"Lucas pr�f�re:",


		//R�ponses
		"- Programmeur",
		"- Dessinateur",
		"- Je veux vous donner des ordres",
		"- Mdr kes ke j�fou ici",

		"- Tu la mange",
		"- Tu la suce",
		"- Pizza",
		"- Je joues au petit bateau avec",

		"- Fez",
		"- Fez",
		"- Fez",
		"- Fez",

		"- Blanc",
		"- Oups j�en ai partout mon cale�on",
		"- Attends quoi 4 ?",
		"- Lundi matin en Narratologie",

		"- Les rousses",
		"- Le cul",
		"- Les seins",
		"- Ta m�re",
	};

public:
	string getPerso(int p);
};
