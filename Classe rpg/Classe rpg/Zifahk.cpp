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
        //J'écris tout ce dont j'ai besoin pour créer un guerrier
        setName(n);
        setMental(m);
        setFlemme(f);
        setQi(q);
    }


    void Zifahk::Refeclater()
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