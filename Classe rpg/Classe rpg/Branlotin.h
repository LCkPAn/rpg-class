#pragma once
#include "Jouable.h"
class Branlotin : public Jouable
{

	public:
		Branlotin();
		Branlotin(string n, int m, int f, int q); //Création constructeur surchargé avec les bases de Personnage + les nouvelles données de Guerrier


		void Flemminchite();

		friend ostream& operator<<(ostream& os, Branlotin const& p);
	};


