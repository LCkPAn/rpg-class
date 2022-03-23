#include "Personnage.h"

Personnage::Personnage()
{
    setName("Default");
    setMental(100);
    setFlemme(0);
    setQi(100);
    
}

Personnage::Personnage(string n, int m, int f, int q)
{
    setName(n);
    setMental(m);
    setFlemme(f);
    setQi(q);
}

string Personnage::getName() const
{
    return name;
}

void Personnage::setName(string n)
{
    if (n.size() <= 0 || n.size() >= 100) {
        name = "BadSize";
    }
    else {
        name = n;
    }
}


int Personnage::getMental() const
{
    return mental;
}

void Personnage::setMental(int m)
{
    if (m < 0 || m >= 10000) {
        mental = 0;
    }
    else {
        mental = m;
    }
}

int Personnage::getFlemme() const
{
    return flemme;
}

void Personnage::setFlemme(int f)
{
    if (f < 0 || f >= 10000) {
        flemme = 0;
    }
    else {
        flemme = f;
    }
}

int Personnage::getQi() const
{
    return qi;
}
void Personnage::setQi(int q)
{
    if (int q < 0 || q >= 10000) {
        qi = 0;
    }
    else {
        qi = q;
    }
}


void Personnage::attack(Personnage& enemy)
{
    enemy.setQi(enemy.getQi() - getMental());
    cout << enemy.getName() <<"s'est fais attquer" << endl;
}

bool Personnage::operator>(Personnage& target)
{
    return getName().size() > target.getName().size();
}

bool Personnage::operator<(Personnage& target)
{
    return !(getName().size() > target.getName().size());
}

ostream& operator<<(ostream& os, Personnage const& p)
{
    os << "--- " << p.getName() << " ---" << endl;
    os << "Santé mentale : " << p.getMental() << endl;
    os << "Flemme : " << p.getFlemme() << endl;
    os << "Qi : " << p.getQi() << endl;
    return os;
}