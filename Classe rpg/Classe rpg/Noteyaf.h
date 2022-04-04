#pragma once
#include "Profs.h"
class Noteyaf : public Profs
{
private: 
	vector<int>rep = { 1, 0, 2 };
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
	"- Un nouvelle drogue que je prends avant chaque Game Jam",
	"- L��tude du sens",
	"- Essayer de comprendre Nathan quand il parle",

	"- De la couleur, de l�amour et des images",
	"- Un texte justifi�",
	"- Je c pas lir mdr",

	"- Cuire un oeuf (no joke j�ai d�j� vu �a sur youtube)",
	"- Sert � l'�change de donn�es entre composants informatiques",
	"- Calculer la puissance graphique d�un NPC corpule v3",
};

public:
	string getCollect();
	int getRep(int r);
	Noteyaf();
	Noteyaf(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier

	string getTab(int f);

	void special();

	void play();

	void init_matrix();

	void get_player_move();

	void get_computer_move();

	void disp_matrix();

	char check();

	bool vulnerable(int mat[3][3]);

	bool winnable(int mat[3][3]);

	bool finished(int mat[3][3]);

	int empty_c(int r);

	int empty_r(int c);

	void reset();

	friend ostream& operator<<(ostream& os, Noteyaf const& p);
};

