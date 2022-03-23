#include "Inventory.h"

string Inventory::getTab(int c)
{
    return tab[c];
}

void Inventory::setTab(string n)
{
    tab.push_back(n);
}

int Inventory::getLTab()
{
    return tab.size();
}

void Inventory::showTab()
{
    for (int i = 0; i <= getLTab(); i++) {
        cout << getTab(i) << endl;
    }
}
