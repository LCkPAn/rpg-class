#pragma once
#include "Jouable.h"
class Godiche: public Jouable
{	
	public:
		Godiche();
		Godiche(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier
		void special();

		friend ostream& operator<<(ostream& os, Godiche const& p);
	};

