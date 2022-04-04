#include "Zifahk.h"



string Zifahk::getCollect()
{
    return collect;
}

Zifahk::Zifahk()
    {
        setName("Default");
        setMental(100);
        setFlemme(0);
        setQi(100);
    }

    Zifahk::Zifahk(string n, int m, int f, int q)
    {
        
        setName(n);
        setMental(m);
        setFlemme(f);
        setQi(q);
    }

    int Zifahk::getRep(int r)
    {
        return rep[r];
    }

    string Zifahk::getTab(int k)
    {
        return Khafiz[k];
    };

    void Zifahk::special()
    {


    }

    ostream& operator<<(ostream& os, Zifahk const& p)
    {
        os << "--- " << p.getName() << " ---" << endl;
        os << "Santé mentale : " << p.getMental() << endl;
        os << "Flemme : " << p.getFlemme() << endl;
        os << "Qi : " << p.getQi() << endl;
        return os;
    }