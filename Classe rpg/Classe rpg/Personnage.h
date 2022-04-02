#pragma once
#include <iostream>
#include <Windows.h> //pour mettre les accents
#include <ctime>

using namespace std;

class Personnage
{
protected:
	string name;
	int mental;
	int flemme;
	int qi;
	bool def;


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

	bool getDef() const;
	void setDef(bool d);


	//Methodes gameplay
	void attack(Personnage& enemy);
	void defend(Personnage& enemy);

	friend ostream& operator<<(ostream& os, Personnage const& p);

};
