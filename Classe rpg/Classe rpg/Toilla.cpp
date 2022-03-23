#include "Toilla.h"

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


void Toilla::Ronpiche()
{


}

ostream& operator<<(ostream& os, Toilla const& p)
{
    os << "--- " << p.getName() << " ---" << endl;
    os << "Santé mentale : " << p.getMental() << endl;
    os << "Flemme : " << p.getFlemme() << endl;
    os << "Qi : " << p.getQi() << endl;
    return os;
}