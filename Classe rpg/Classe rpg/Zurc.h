#pragma once
#include "Personnage.h"
class Zurc : public Personnage
{

public:
	Zurc();
	Zurc(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier


	void LevelDesign();

	friend ostream& operator<<(ostream& os, Zurc const& p);

};

