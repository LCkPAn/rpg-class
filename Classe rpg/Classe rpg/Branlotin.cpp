#include "Branlotin.h"



Branlotin::Branlotin()
{
    setName("Default");
    setMental(100);
    setFlemme(0);
    setQi(100);
}

Branlotin::Branlotin(string n, int m, int f, int q)
{
    //J'écris tout ce dont j'ai besoin pour créer un guerrier
    setName(n);
    setMental(m);
    setFlemme(f);
    setQi(q);
}


void Branlotin::Flemminchite()
{
    if (getFlemme() <50) {
        cout << "Pas assez flemmard aujourd'hui" << endl;
    }
    else {
        setFlemme(getFlemme()> 50);
        int bonus = getQi() * (getFlemme() * 0, 75);
        setFlemme(bonus);
        setQi(getQi() + bonus);
    }

}

ostream& operator<<(ostream& os, Branlotin const& p)
{
    os << "--- " << p.getName() << " ---" << endl;
    os << "Santé mentale : " << p.getMental() << endl;
    os << "Flemme : " << p.getFlemme() << endl;
    os << "Qi : " << p.getQi() << endl;
    return os;
}
