#pragma once
#include "Profs.h"

class Zifahk : public Profs
{
private:
	string collect = "Paquet de clope";
	vector<string> Khafiz =
	{
		//Khafiz

		//D�but de combat
		"Salut les filles !"

		//Punch
		"Starfoullah que t�es moche"
		"Ce week-end je vous mets le lien du drive"
		"C�est �clat� au sol ce que tu as fait"

		//fin de combat
		"Bon bah je vais devoir me mettre affinity alors"

		//Questions
		"C�est quoi ta ref ?",
		"T�es con o� t�es con ?",
		"Oh c�est qui qui parle la ?!",


		//R�ponses
		"- Je l�ai chopp� sur Pinterest de mon artiste pr�f�r�",
		"- Ouin ouin je l�ai recopi� je suis un b�b� ",
		"- Heeeu j�ai pas fais mon boulot (90% du temps)",

		"- D�sol� je suis une merde",
		"- 42 ?",
		"- La r�ponse � la question",

		"- D�sol� Salim",
		"- ��",
		"- Salim je te prends en 1vs1, rdv gare du nord" };

public:
	Zifahk();
	Zifahk(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier

	string getTab(int k);

	void special();

	friend ostream& operator<<(ostream& os, Zifahk const& p);

};

