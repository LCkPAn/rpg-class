#pragma once
#include "Profs.h"
class Mahc : public Profs
{
private:
	string collect = "Stich";
	vector<string> Cham =
	{
		//Cham

		//Questions
		"Quel est le rôle d’un destructeur ?",
		"A quoi sert l'héritage ?",
		"Comment utiliser une fonction Friend ?",


		//Réponses
		"- Une fonction membre qui est appelée automatiquement lorsque l’objet est hors de portée ou est détruite explicitement par un appel à delete",
		"- De tout CASSER",
		"- De broyer du papier",

		"- De permettre à ses enfants un avenir merveilleux (sauf si t’es prof de prog)",
		"- Permet de donner à une classe toutes les caractéristiques d'une ou de plusieurs autres classes",
		"- Le savoir que je laisse à mes élèves, non je rigole je suis juste pour la THUNE",

		"- En demandant en Chandler et Monica",
		"- En demandant à ton voisin de classe",
		"- Accorder l’accès aux membres privés et protégés de votre classe",
	};

public:
	Mahc();
	Mahc(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier

	string getTab(int c);

	void Charme();

	friend ostream& operator<<(ostream& os, Mahc const& p);
};

