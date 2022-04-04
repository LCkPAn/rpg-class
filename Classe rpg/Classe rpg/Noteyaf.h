#pragma once
#include "Profs.h"
class Noteyaf : public Profs
{
private: 
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
	"- L’étude du sens",
	"- Un nouvelle drogue que je prends avant chaque Game Jam",
	"- Essayer de comprendre Nathan quand il parle",

	"- Un texte justifié",
	"- De la couleur, de l’amour et des images",
	"- Je c pas lir mdr",

	"- Sert à l'échange de données entre composants informatiques",
	"- Cuire un oeuf (no joke j’ai déjà vu ça sur youtube)",
	"- Calculer la puissance graphique d’un NPC corpule v3",
};

public:
	Noteyaf();
	Noteyaf(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier

	string getTab(int f);

	void special();

	friend ostream& operator<<(ostream& os, Noteyaf const& p);
};

