#pragma once
#include "Personnage.h"

class Zifahk : public Personnage
{
public:
	Zifahk();
	Zifahk(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier


	void Refeclater();

	friend ostream& operator<<(ostream& os, Zifahk const& p);

};

