#include "Duree.h"
#include <iostream>

using namespace std;

Duree::Duree(int jours,int heures,int minutes,int secondes):m_jours(jours),m_heures(heures),m_minutes(minutes),m_secondes(secondes)
{

}

bool Duree::estEgal(Duree const& b) const
{
    if(m_jours==b.m_jours&& m_heures== b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes)
    return true;
    else
    return false;
}
bool operator==(Duree const& a,Duree const& b)
{
    return a.estEgal(b);
}

