#pragma once
#include "Personnage.h"
class Noteyaf : public Personnage
{
public:
	Noteyaf();
	Noteyaf(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier


	void Downtherabbithole();

	friend ostream& operator<<(ostream& os, Noteyaf const& p);
};

