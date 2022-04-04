#include "Profs.h"

string Profs::getTab(int r)
{
	return tab[r];
}

void Profs::startFight(Profs& p, Jouable& j)
{
	system("CLS");
	int tempVie = j.getMental();
	cout << p.getTab(0) << endl;
	int action;
	while (p.getMental() > 0 && j.getMental() > 0) {
		j.setDef(false);
		action = 0;
		cout << p << endl;
		cout << j << endl;
		int randNum = rand() % (3 - 1 + 1) + 1;
		int randAction = rand() % (3 - 1 + 1) +1;
		cout << " 1 pour Attaquer , 2 Pour se défendre , 3 Pour l'attaque spécial" << endl; 
		cin >> action;
		switch (action)
		{
		case 1:
			j.attack(p);
			break;
		case 2:
			cout << j.getName() << " se défend " << endl;
			j.setDef(true);
			break;
		case 3:
			j.special();
			break;
		default:
			cout << "mauvaise commande" << endl;
			break;
		}
		p.setDef(false);
		switch (randAction) {
		case 1:
			p.attack(j);
			break;
		case 2:
			cout << p.getName() << " se défend " << endl;
			p.setDef(true);
			break;

		case 3:
			p.special();
			break;
		}
		cout << endl;
		cout << p.getTab(randNum) << endl;
		cout << endl;
		system("PAUSE");
		
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
	system("PAUSE");
	
	
}

void Profs::special()
{
	cout << "pas d'attaque spe" << endl;
}

string Profs::getCollect()
{
	return collect;
}

int Profs::getRep(int r)
{
	return rep[r];
}
