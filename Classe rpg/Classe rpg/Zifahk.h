#pragma once
#include "Jouable.h"

class Zifahk : public Jouable
{
private:
	vector<string> Khafiz =
	{
		//Khafiz

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

	string getZifahk(int k);

	void Refeclater();

	friend ostream& operator<<(ostream& os, Zifahk const& p);

};

