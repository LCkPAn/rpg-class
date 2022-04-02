#pragma once
#include "Personnage.h"
#include "Jouable.h"
#include "Inventory.h"
class Profs: public Personnage
{
private:
	vector<string> tab;
	string collect;
public :
	virtual string getTab(int r);
	virtual void startFight(Profs&, Jouable&);
	virtual void special();
	virtual string getCollect();
};

