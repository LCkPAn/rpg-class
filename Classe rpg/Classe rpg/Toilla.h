#pragma once
#include "Personnage.h"

class Toilla : public Personnage
{
public:
	Toilla();
	Toilla(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier


	void Ronpiche();

	friend ostream& operator<<(ostream& os, Toilla const& p);
};

