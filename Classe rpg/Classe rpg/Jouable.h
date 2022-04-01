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
		"Tu te sens l’âme d’un ?",
		"Si je te dis banane ?",
		"Ton jeu favoris ?",
		"Le cheveaux blanc d’henri 4 est :",
		"Lucas préfère:",


		//Réponses
		"- Programmeur",
		"- Dessinateur",
		"- Je veux vous donner des ordres",
		"- Mdr kes ke j’fou ici",

		"- Tu la mange",
		"- Tu la suce",
		"- Pizza",
		"- Je joues au petit bateau avec",

		"- Fez",
		"- Fez",
		"- Fez",
		"- Fez",

		"- Blanc",
		"- Oups j’en ai partout mon caleçon",
		"- Attends quoi 4 ?",
		"- Lundi matin en Narratologie",

		"- Les rousses",
		"- Le cul",
		"- Les seins",
		"- Ta mère",
	};

public:
	string getPerso(int p);
};
