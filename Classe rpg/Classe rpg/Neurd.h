#pragma once
#include "Jouable.h"
class Neurd : public Jouable
{
public:
	Neurd();
	Neurd(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier


	void special();

	friend ostream& operator<<(ostream& os, Neurd const& p);

};

