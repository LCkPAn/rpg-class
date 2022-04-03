#include "Noteyaf.h"
Noteyaf::Noteyaf()
{
    setName("Default");
    setMental(100);
    setFlemme(0);
    setQi(100);
}

Noteyaf::Noteyaf(string n, int m, int f, int q)
{
    //J'écris tout ce dont j'ai besoin pour créer un guerrier
    setName(n);
    setMental(m);
    setFlemme(f);
    setQi(q);
}


string Noteyaf::getTab(int f)
{
    return Fayeton[f];
};


void Noteyaf::special()
{

}

ostream& operator<<(ostream& os, Noteyaf const& p)
{
    os << "--- " << p.getName() << " ---" << endl;
    os << "Santé mentale : " << p.getMental() << endl;
    os << "Flemme : " << p.getFlemme() << endl;
    os << "Qi : " << p.getQi() << endl;
    return os;
}