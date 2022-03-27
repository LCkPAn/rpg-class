#pragma once
#include <iostream>
#include <Windows.h> //pour mettre les accents
#include "Jouable.h"

using namespace std;

class Personnage : public Jouable
{
protected:
	string name;
	int mental;
	int flemme;
	int qi;


public:
	//Constructeurs
	Personnage();
	Personnage(string n, int m, int f, int q);

	//Getters Setters
	string getName() const;
	void setName(string n);


	int getMental() const;
	void setMental(int m);

	int getFlemme() const;
	void setFlemme(int f);

	int getQi() const;
	void setQi(int q);


	//Methodes gameplay
	void attack(Personnage& enemy);

	bool operator>(Personnage& target);
	bool operator<(Personnage& target);

	friend ostream& operator<<(ostream& os, Personnage const& p);

};
