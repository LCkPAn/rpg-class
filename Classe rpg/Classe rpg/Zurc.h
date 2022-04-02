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
	"Définissez moi les 3c: ",
	"Comment tester rapidement un lvl",


	//Réponses
	"- Faire comprendre ses intentions de jeu aux joueurs",
	"- Lancer Atmosphir",
	"- Présenter une suite de nouvelle mécanique",

	"- Control, Camera, Character",
	"- Café, caca, clope ",
	"- Vos profs préférés, Cham, Cruz et Careen (ok c’est avec un K mais tu as compris prend pas la tête)",

	"- Grâce à un blocktober",
	"- En speedrun",
	"- Un max de coke",
};

public:
	Zurc();
	Zurc(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier

	string getTab(int r);

	void LevelDesign();

	friend ostream& operator<<(ostream& os, Zurc const& p);

};

