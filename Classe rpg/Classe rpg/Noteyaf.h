#pragma once
#include "Profs.h"
class Noteyaf : public Profs
{
private: 
	string collect = "Carotte";
	vector<string> Fayeton =
{
	//Fayeton

	//D�but de combat
	"'Bonjour n�affecte pas Noteyaf, rien ne ce passe'",

	//Punch
	"Aujourd�hui on va parler de l�histoire de jeu vid�o, � je crois que je me r�p�te",
	"Une vid�o de JDG �a te tente ?",
	"Kamelot c�est vraiment la meilleur s�rie",

	//Aurevoir
	"J'aurais aim� que ce ne sois qu'un reve",

	//Questions
	"La s�mantique c�est :",
	"Un bon document GDD pour moi c�est :",
	"Un processeur d�ordinateur sert � :",


	//R�ponses
	"- L��tude du sens",
	"- Un nouvelle drogue que je prends avant chaque Game Jam",
	"- Essayer de comprendre Nathan quand il parle",

	"- Un texte justifi�",
	"- De la couleur, de l�amour et des images",
	"- Je c pas lir mdr",

	"- Sert � l'�change de donn�es entre composants informatiques",
	"- Cuire un oeuf (no joke j�ai d�j� vu �a sur youtube)",
	"- Calculer la puissance graphique d�un NPC corpule v3",
};

public:
	Noteyaf();
	Noteyaf(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier

	string getTab(int f);

	void special();

	friend ostream& operator<<(ostream& os, Noteyaf const& p);
};

