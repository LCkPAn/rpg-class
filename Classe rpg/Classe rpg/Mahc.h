#pragma once
#include "Profs.h"
class Mahc : public Profs
{
private:
	string collect = "Stich";
	vector<string> Cham =
	{
		//Cham

		//Début de combat
		"Aujourd’hui on va commencer un cours où 80% d’entre vous vont rien comprendre mais c’est pas grave, j’ai l’habitude de me sentir inutile "

		//Punch
		"Je vais te péter les genoux, mais t’inquiète c’est juste pour me donner un genre"
		"Ne me vouvoie pas stp, ça me fait sentir plus jeune"
		"Ta mère elle est.. Désolé j’ai jamais d’inspiration pour des blagues drôles "

		//Fin de combat
		"Et si on allait boire un coup ?"

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

	void special();

	friend ostream& operator<<(ostream& os, Mahc const& p);
};

