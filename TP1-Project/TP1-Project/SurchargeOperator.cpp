/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: SurchargeOperator.cpp
 * But: Contient les differentes definitions des surchages d'operateurs
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "SurchargeOperator.h"

void afficherJoueur(ostream &flux, Joueur &j)
{
	j.show(flux);
}

ostream & operator <<(ostream &flux, Joueur &joueur)
{
	joueur.show(flux);
	return flux;
}

ostream & operator <<(ostream &flux, Fiche &fiche)
{
	fiche.show(flux);
	return flux;
}

bool operator ==(Fiche const& f1, Fiche const& f2)
{
	return f1.equals(f2);
}

bool operator ==(Defenseur const &p1, Defenseur const &p2)
{
	return p1.equals(*p2.getFiche());
}

bool operator ==(Defenseur const &p1, Avant const &p2)
{
	return p1.equals(*p2.getFiche());
}

bool operator ==(Avant const &p1, Defenseur const &p2)
{
	return p1.equals(*p2.getFiche());
}

bool operator ==(Avant const &p1, Avant const &p2)
{
	return p1.equals(*p2.getFiche());
}

bool operator !=(Defenseur const &p1, Defenseur const &p2)
{
	return !(p1 == p2);
}

bool operator !=(Defenseur const &p1, Avant const &p2)
{
	return !(p1 == p2);
}

bool operator !=(Avant const &p1, Defenseur const &p2)
{
	return !(p1 == p2);
}

bool operator !=(Avant const &p1, Avant const &p2)
{
	return !(p1 == p2);
}
