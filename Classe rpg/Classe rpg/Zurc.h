#pragma once
#include "Personnage.h"
class Zurc : public Personnage
{

public:
	Zurc();
	Zurc(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier


	void LevelDesign();

	friend ostream& operator<<(ostream& os, Zurc const& p);

};

