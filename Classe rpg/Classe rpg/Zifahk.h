#pragma once
#include "Personnage.h"

class Zifahk : public Personnage
{
public:
	Zifahk();
	Zifahk(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier


	void Refeclater();

	friend ostream& operator<<(ostream& os, Zifahk const& p);

};

