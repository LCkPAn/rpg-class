#pragma once
#include "Personnage.h"
class Mahc : public Personnage
{
public:
	Mahc();
	Mahc(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier


	void Charme();

	friend ostream& operator<<(ostream& os, Mahc const& p);
};

