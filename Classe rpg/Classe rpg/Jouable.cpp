#include "Jouable.h"


string Jouable::getPerso(int p)
{
    return Perso[p];
}
void Jouable::special()
{
    
}
string Jouable::getTab(int c)
{
    return tab[c];
}

void Jouable::setTab(string n)
{
    tab.push_back(n);
}

int Jouable::getLTab()
{
    return tab.size();
}

void Jouable::showTab()
{
    for (int i = 0; i <= getLTab(); i++) {
        cout << getTab(i) << endl;
    }
}

;
