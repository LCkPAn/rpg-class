#pragma once
#include "Profs.h"
class Zurc : public Profs
{
private:
	string collect = "rien";
	vector<string> Cruz =
{
	//Cruz

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

	void LevelDesign();

	friend ostream& operator<<(ostream& os, Zurc const& p);

};

