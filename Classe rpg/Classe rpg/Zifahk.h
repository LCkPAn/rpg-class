#pragma once
#include "Profs.h"

class Zifahk : public Profs
{
private:
	string collect = "Paquet de clope";
	vector<string> Khafiz =
	{
		//Khafiz

		//Début de combat
		"Salut les filles !"

		//Punch
		"Starfoullah que t’es moche"
		"Ce week-end je vous mets le lien du drive"
		"C’est éclaté au sol ce que tu as fait"

		//fin de combat
		"Bon bah je vais devoir me mettre affinity alors"

		//Questions
		"C’est quoi ta ref ?",
		"T’es con où t’es con ?",
		"Oh c’est qui qui parle la ?!",


		//Réponses
		"- Je l’ai choppé sur Pinterest de mon artiste préféré",
		"- Ouin ouin je l’ai recopié je suis un bébé ",
		"- Heeeu j’ai pas fais mon boulot (90% du temps)",

		"- Désolé je suis une merde",
		"- 42 ?",
		"- La réponse à la question",

		"- Désolé Salim",
		"- ……",
		"- Salim je te prends en 1vs1, rdv gare du nord" };

public:
	Zifahk();
	Zifahk(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier

	string getTab(int k);

	void special();

	friend ostream& operator<<(ostream& os, Zifahk const& p);

};

