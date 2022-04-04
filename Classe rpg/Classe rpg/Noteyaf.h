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

	//Début de combat
	"'Bonjour n’affecte pas Noteyaf, rien ne ce passe'",

	//Punch
	"Aujourd’hui on va parler de l’histoire de jeu vidéo, à je crois que je me répète",
	"Une vidéo de JDG ça te tente ?",
	"Kamelot c’est vraiment la meilleur série",

	//Aurevoir
	"J'aurais aimé que ce ne sois qu'un reve",

	//Questions
	"La sémantique c’est :",
	"Un bon document GDD pour moi c’est :",
	"Un processeur d’ordinateur sert à :",


	//Réponses
	"- Un nouvelle drogue que je prends avant chaque Game Jam",
	"- L’étude du sens",
	"- Essayer de comprendre Nathan quand il parle",

	"- De la couleur, de l’amour et des images",
	"- Un texte justifié",
	"- Je c pas lir mdr",

	"- Cuire un oeuf (no joke j’ai déjà vu ça sur youtube)",
	"- Sert à l'échange de données entre composants informatiques",
	"- Calculer la puissance graphique d’un NPC corpule v3",
};

public:
	string getCollect();
	int getRep(int r);
	Noteyaf();
	Noteyaf(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier

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

