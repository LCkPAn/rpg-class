#include "Profs.h"

string Profs::getTab(int r)
{
	return tab[r];
}

void Profs::startFight(Profs& p, Jouable& j)
{
	int tempVie = j.getMental();
	cout << p.getTab(13) << endl;
	int action;
	while (p.getMental() > 0 && j.getMental() > 0) {
		int randNum = rand() % (16 - 14 + 1) + 14;
		int randAction = rand() % (3 - 1 + 1) +1;
		cout << "1 pour Attaquer , 2 Pour se défendre , 3 Pour l'attaque spécial" << endl; 
		cin >> action;
		switch (action)
		{
		case 1:
			j.attack(p);
			break;
		case 2:
			j.setDef(true);

		case 3:
			j.special();
		default:
			cout << "mauvaise commande" << endl;
			break;
		}
		cout << p.getTab(randNum) << endl;
		switch (randAction) {
		case 1:
			p.attack(j);
			break;
		case 2:
			p.setDef(true);

		case 3:
			p.special();
		}
	}
	if (j.getMental() > 0) {
		cout << j.getName() << "a gagne le combat !" << endl;
		cout << "vous obtenez" << p.getCollect() << endl;
		j.setTab(p.getCollect());
	}
	if (p.getMental() > 0) {
		cout << p.getName() << "a gagne le combat ! Tu ne pourras donc rien recevoir, tu te repose et passe au cours suivant " << endl;
		j.setMental(tempVie);
	}

	
}

void Profs::special()
{
	cout << "pas d'attaque spe" << endl;
}

string Profs::getCollect()
{
	return collect;
}
