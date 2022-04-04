#include "Toilla.h"

string Toilla::getCollect()
{
    return collect;
}

int Toilla::getRep(int r)
{
    return rep[r];
}

Toilla::Toilla()
{
    setName("Default");
    setMental(100);
    setFlemme(0);
    setQi(100);
}

Toilla::Toilla(string n, int m, int f, int q)
{
    //J'écris tout ce dont j'ai besoin pour créer un guerrier
    setName(n);
    setMental(m);
    setFlemme(f);
    setQi(q);
}

string Toilla::getTab(int a)
{
    return Alliot[a];
}


void Toilla::special(Personnage& enemy)
{
    cout << getName() << "Toilla vous fait dormir et il en profite pour attaquer une 2eme fois" << enemy.getName() << endl;

    Toilla::attack(enemy);
    Toilla::attack(enemy);
}

ostream& operator<<(ostream& os, Toilla const& p)
{
    os << "--- " << p.getName() << " ---" << endl;
    os << "Santé mentale : " << p.getMental() << endl;
    os << "Flemme : " << p.getFlemme() << endl;
    os << "Qi : " << p.getQi() << endl;
    return os;
}