#pragma once
#include "Profs.h"
class Zurc : public Profs
{
private:
	string collect = "rien";
	vector<string> Cruz =
{
	//Cruz

	//D�but de combat
	"Aujourd�hui on va lancer Atmosphir et faire de la merde",

	//Punch
	"Je ne suis pas ton de LD mais de Quart-rat�",
	"On m'a encore confondu avec un �l�ve aujourd�hui�",
	"Je vous ai pr�par� un tuto sur l�utilisation de YouTube",

	//Fin de combat
	"A la semaine prochaine, pour un cours productif et non POISSON D�AVRIL",

	//Questions
	"Pour faire un bon tuto il faut ? ",
	"D�finissez moi les 3c: ",
	"Comment tester rapidement un lvl",


	//R�ponses
	"- Faire comprendre ses intentions de jeu aux joueurs",
	"- Lancer Atmosphir",
	"- Pr�senter une suite de nouvelle m�canique",

	"- Control, Camera, Character",
	"- Caf�, caca, clope ",
	"- Vos profs pr�f�r�s, Cham, Cruz et Careen (ok c�est avec un K mais tu as compris prend pas la t�te)",

	"- Gr�ce � un blocktober",
	"- En speedrun",
	"- Un max de coke",
};

public:
	Zurc();
	Zurc(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier

	string getTab(int r);

	void special();

	friend ostream& operator<<(ostream& os, Zurc const& p);

};

