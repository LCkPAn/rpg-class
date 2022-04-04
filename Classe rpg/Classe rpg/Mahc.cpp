#include "Mahc.h"
Mahc::Mahc()
{
    setName("Default");
    setMental(100);
    setFlemme(0);
    setQi(100);
}

Mahc::Mahc(string n, int m, int f, int q)
{
    setName(n);
    setMental(m);
    setFlemme(f);
    setQi(q);
}
int Mahc::getRep(int r)
{
	return rep[r];
}

string Mahc::getTab(int c)
{
    return Cham[c];
};

void Mahc::startFight(Profs& p, Jouable& j)
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
		int randAction = rand() % (3 - 1 + 1) + 1;
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
			if (getResultat() == true) {
				cout << "c bien petit" << endl;
			}
			else
			{
				cout << "tu vas vite revoir le cours toi" << endl;
			}
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


}
void Mahc::special()
{
	srand(time(NULL));
	int resultat;
	int a = rand() % (100 - 50 + 1) + 50;
	int b = rand() % (200 - 125 + 1) + 125;
	resultat = (b * a);
	int resultatj = 0;

	cout << "Mach utilise son attaque special" << endl;
	cout << "a = " << a << " b = " << b << endl;
	cout << "(b * c) / a" << endl;
	cout << "Quel est la somme de ce calcul :" << endl; cin >> resultatj;
	if (resultat == resultatj) {
		setResultat(true);
	}
	else
	{
		setResultat(false);
	}
}

bool Mahc::getResultat()
{
	return resultat;
}

void Mahc::setResultat(bool r)
{
	resultat = r;
}

string Mahc::getCollect()
{
	return collect;
}


    ostream& operator<<(ostream & os, Mahc const& p)
    {
        os << "--- " << p.getName() << " ---" << endl;
        os << "Santé mentale : " << p.getMental() << endl;
        os << "Flemme : " << p.getFlemme() << endl;
        os << "Qi : " << p.getQi() << endl;
        return os;
    }