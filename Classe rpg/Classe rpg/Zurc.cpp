#include "Zurc.h"

Zurc::Zurc()
{
    setName("Default");
    setMental(100);
    setFlemme(0);
    setQi(100);
}

Zurc::Zurc(string n, int m, int f, int q)
{
    //J'?cris tout ce dont j'ai besoin pour cr?er un personnage profs
    setName(n);
    setMental(m);
    setFlemme(f);
    setQi(q);
}

string Zurc::getTab(int r)
{
    return Cruz[r];
};


void Zurc::special()
{
    cout << "Zurc attaque TREMPETTE, mais rien ne ce passe" << endl;

}

string Zurc::getCollect()
{
    return collect;
}

int Zurc::getRep(int r)
{
    return rep[r];
}

ostream& operator<<(ostream& os, Zurc const& p)
{
    os << "--- " << p.getName() << " ---" << endl;
    os << "Sant? mentale : " << p.getMental() << endl;
    os << "Flemme : " << p.getFlemme() << endl;
    os << "Qi : " << p.getQi() << endl;
    return os;
}