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
    //J'�cris tout ce dont j'ai besoin pour cr�er un guerrier
    setName(n);
    setMental(m);
    setFlemme(f);
    setQi(q);
}

string Mahc::getMahc(int c)
{
    return Cham[c];
};

void Mahc::Charme()
{
   
}

    ostream& operator<<(ostream & os, Mahc const& p)
    {
        os << "--- " << p.getName() << " ---" << endl;
        os << "Sant� mentale : " << p.getMental() << endl;
        os << "Flemme : " << p.getFlemme() << endl;
        os << "Qi : " << p.getQi() << endl;
        return os;
    }