#pragma once
#include "Personnage.h"
class Mahc : public Personnage
{
public:
	Mahc();
	Mahc(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier


	void Charme();

	friend ostream& operator<<(ostream& os, Mahc const& p);
};

