#include "Neurd.h"

Neurd::Neurd()
{
    setName("Default");
    setMental(100);
    setFlemme(0);
    setQi(100);
}

Neurd::Neurd(string n, int m, int f, int q)
{
    
    setName(n);
    setMental(m);
    setFlemme(f);
    setQi(q);
}


void Neurd::special()
{
    if (getQi() < 50) {
        cout << "trop con pour aujourd'hui" << endl;
    }
    else {
        cout << "Neurd Utilise Cerveau" << endl;
        setQi(getQi() > 100);
        int bonus = getQi() + 40;
        setQi(bonus);
        setQi(getQi() + bonus);
    }
}


    ostream& operator<<(ostream & os, Neurd const& p)
    {
        os << "--- " << p.getName() << " ---" << endl;
        os << "Sant� mentale : " << p.getMental() << endl;
        os << "Flemme : " << p.getFlemme() << endl;
        os << "Qi : " << p.getQi() << endl;
        return os;
    }

