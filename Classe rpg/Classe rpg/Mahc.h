#pragma once
#include "Jouable.h"
class Mahc : public Jouable
{
private:
	vector<string> Cham =
	{
		//Cham

		//Questions
		"Quel est le r�le d�un destructeur ?",
		"A quoi sert l'h�ritage ?",
		"Comment utiliser une fonction Friend ?",


		//R�ponses
		"- Une fonction membre qui est appel�e automatiquement lorsque l�objet est hors de port�e ou est d�truite explicitement par un appel � delete",
		"- De tout CASSER",
		"- De broyer du papier",

		"- De permettre � ses enfants un avenir merveilleux (sauf si t�es prof de prog)",
		"- Permet de donner � une classe toutes les caract�ristiques d'une ou de plusieurs autres classes",
		"- Le savoir que je laisse � mes �l�ves, non je rigole je suis juste pour la THUNE",

		"- En demandant en Chandler et Monica",
		"- En demandant � ton voisin de classe",
		"- Accorder l�acc�s aux membres priv�s et prot�g�s de votre classe",
	};

public:
	Mahc();
	Mahc(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier

	string getMahc(int c);

	void Charme();

	friend ostream& operator<<(ostream& os, Mahc const& p);
};

