#pragma once
#include "Personnage.h"
class Neurd : public Personnage
{
public:
	Neurd();
	Neurd(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier


	void Cerveau();

	friend ostream& operator<<(ostream& os, Neurd const& p);

};

