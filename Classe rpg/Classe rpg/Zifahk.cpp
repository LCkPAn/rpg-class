#include "Zifahk.h"


    Zifahk::Zifahk()
    {
        setName("Default");
        setMental(100);
        setFlemme(0);
        setQi(100);
    }

    Zifahk::Zifahk(string n, int m, int f, int q)
    {
        //J'�cris tout ce dont j'ai besoin pour cr�er un guerrier
        setName(n);
        setMental(m);
        setFlemme(f);
        setQi(q);
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
        os << "Sant� mentale : " << p.getMental() << endl;
        os << "Flemme : " << p.getFlemme() << endl;
        os << "Qi : " << p.getQi() << endl;
        return os;
    }