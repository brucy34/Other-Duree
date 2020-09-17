#include "Duree.h"
#include <iostream>

Duree::Duree(int jours,int heures,int minutes,int secondes):m_jours(jours),m_heures(heures),m_minutes(minutes),m_secondes(secondes)
{
    if(secondes>60)
    {
        m_secondes=secondes/60;
        m_minutes=minutes+(secondes%60);
    }
    else if(minutes>60)
    {
        m_minutes=minutes/60;
        m_heures=heures+(minutes%60);
    }
    else if(heures>24)
    {
        m_heures=heures/24;
        m_jours=jours+(heures%24);
    }
    else
    {
        m_jours=jours;
        m_heures=heures;
        m_minutes=minutes;
        m_secondes=secondes;
    }
bool Duree::operator==(Duree const& a)const
    {
        Duree const& b;
    if (a.m_heures == b.m_heures && a.m_minutes == b.m_minutes && a.m_secondes == b.m_secondes)
        return true;
    else
        return false;
}
bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);     //Teste si a.m_heure == b.m_heure etc.
}
bool operator==(Duree const& a)
{
    Duree const& b;
    return a.estEgal(b);
}
