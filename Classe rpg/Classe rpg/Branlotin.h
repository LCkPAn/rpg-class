#pragma once
#include "Personnage.h"
class Branlotin : public Personnage
{

	public:
		Branlotin();
		Branlotin(string n, int m, int f, int q); //Cr�ation constructeur surcharg� avec les bases de Personnage + les nouvelles donn�es de Guerrier


		void Flemminchite();

		friend ostream& operator<<(ostream& os, Branlotin const& p);
	};
};

