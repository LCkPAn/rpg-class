#pragma once
#include "Personnage.h"
#include "Jouable.h"
class Profs: public Personnage
{
private:
	vector<int>rep = { 0, 0, 0 };
	vector<string> tab;
	string collect;
public :
	virtual string getTab(int r);
	virtual void startFight(Profs&, Jouable&);
	virtual void special();
	virtual string getCollect();
	virtual int getRep(int r);
};

