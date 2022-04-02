#pragma once
#include "Jouable.h"
class Neurd : public Jouable
{
public:
	Neurd();
	Neurd(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier


	void special();

	friend ostream& operator<<(ostream& os, Neurd const& p);

};

