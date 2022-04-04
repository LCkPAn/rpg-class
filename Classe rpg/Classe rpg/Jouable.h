#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Personnage.h"

class Jouable: public Personnage
{
private:
	vector <string> tab;
	vector<string> Perso =
	{
		//Selection Perso

		//Questions
		"Tu te sens l’âme d’un ?",
		"Si je te dis banane ?",
		"Ton jeu favoris ?",
		"Le cheveaux blanc d’henri 4 est : ",
		"Lucas préfère: ",


		//Réponses
		"- 1 Programmeur ?",
		"- 2 Dessinateur ?",
		"- 3 Je veux vous donner des ordres ?",
		"- 4 Mdr kes ke j’fou ici ?",

		"- 1 Tu la mange ?",
		"- 2 Tu la suce ?",
		"- 3 Pizza ?",
		"- 4 Je joues au petit bateau avec ?",

		"- 1 Fez ?",
		"- 2 Fez ?",
		"- 3 Fez ?",
		"- 4 Fez ?",

		"- 1 Blanc ?",
		"- 2 Oups j’en ai partout mon caleçon ?",
		"- 3 Attends quoi 4 ?",
		"- 4 Lundi matin en Narratologie ?",

		"- 1 Les rousses ?",
		"- 2 Le cul ?",
		"- 3 Les seins ?",
		"- 4 Ta mère ?",
	};

public:
	string getPerso(int p);
	virtual void special();
	string getTab(int c);
	void setTab(string n);

	int getLTab();

	void showTab();
};
