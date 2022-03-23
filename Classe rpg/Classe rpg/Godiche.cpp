#include "Godiche.h"

Godiche::Godiche()
{
    setName("Default");
    setMental(100);
    setFlemme(0);
    setQi(100);
}

Godiche::Godiche(string n, int m, int f, int q)
{
    //J'écris tout ce dont j'ai besoin pour créer un guerrier
    setName(n);
    setMental(m);
    setFlemme(f);
    setQi(q);
}


void Godiche::Godemichet()
{
    if (getMental() < 50) {
        cout << "Pas assez con aujourd'hui" << endl;
    }
    else {
        setMental(getMental() > 50);
        int bonus = getQi() * (getMental() * 0, 75);
        setMental(bonus);
        setQi(getQi() + bonus);
    }

    ostream& operator<<(ostream & os, Branlotin const& p)
    {
        os << "--- " << p.getName() << " ---" << endl;
        os << "Santé mentale : " << p.getMental() << endl;
        os << "Flemme : " << p.getFlemme() << endl;
        os << "Qi : " << p.getQi() << endl;
        return os;
    }
}