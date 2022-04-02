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
    //J'écris tout ce dont j'ai besoin pour créer un guerrier
    setName(n);
    setMental(m);
    setFlemme(f);
    setQi(q);
}

string Zurc::getTab(int r)
{
    return Cruz[r];
};


void Zurc::LevelDesign()
{
   

}

ostream& operator<<(ostream& os, Zurc const& p)
{
    os << "--- " << p.getName() << " ---" << endl;
    os << "Santé mentale : " << p.getMental() << endl;
    os << "Flemme : " << p.getFlemme() << endl;
    os << "Qi : " << p.getQi() << endl;
    return os;
}