#pragma once
#include "Jouable.h"
class Godiche: public Jouable
{	
	public:
		Godiche();
		Godiche(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier
		void special();

		friend ostream& operator<<(ostream& os, Godiche const& p);
	};

