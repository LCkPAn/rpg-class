#pragma once
#include "Personnage.h"
class Godiche: public Personnage
{	
	public:
		Godiche();
		Godiche(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier


		void Godemichet();

		friend ostream& operator<<(ostream& os, Godiche const& p);
	};
};
