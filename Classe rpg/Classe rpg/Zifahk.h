#pragma once
#include "Profs.h"

class Zifahk : public Profs
{
private:
	vector<int>rep = { 1, 2, 0 };
	string collect = "Paquet de clope";
	vector<string> Khafiz =
	{
		//Khafiz

		//D�but de combat
		"Salut les filles !",

		//Punch
		"Starfoullah que t�es moche",
		"Ce week-end je vous mets le lien du drive",
		"C�est �clat� au sol ce que tu as fait",

		//fin de combat
		"Bon bah je vais devoir me mettre affinity alors",

		//Questions
		"C�est quoi ta ref ?",
		"T�es con o� t�es con ?",
		"Oh c�est qui qui parle la ?!",


		//R�ponses
		"- Ouin ouin je l�ai recopi� je suis un b�b� ",
		"- Heeeu j�ai pas fais mon boulot (90% du temps)",
		"- Je l�ai chopp� sur Pinterest de mon artiste pr�f�r�",

		"- 42 ?",
		"- La r�ponse � la question",
		"- D�sol� je suis une merde",

		"- ��",
		"- Salim je te prends en 1vs1, rdv gare du nord" ,
		"- D�sol� Salim" };

public:
	string getCollect();
	Zifahk();
	Zifahk(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier
	int getRep(int r);
	string getTab(int k);

	void special();

	friend ostream& operator<<(ostream& os, Zifahk const& p);

};

