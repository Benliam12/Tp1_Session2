/*==================================================================================================
 * Auteur: William D'Anjou
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
	afficherJoueur(flux, joueur);
	return flux;
}

ostream & operator <<(ostream &flux, Fiche &fiche)
{
	fiche.show(flux);
	return flux;
}

bool operator==(Defenseur const& p1, Avant const &p2)
{
	return p1.equals(*p2.getFiche());
}



bool operator==(Fiche const& f1, Fiche const& f2)
{
	return f1.equals(f2);
}

//bool operator ==(Defenseur const &d1, Defenseur const &d2)
//{
//
//}
//
//bool operator !=(Defenseur const &d1, Defenseur const &d2)
//{
//	return !(d1 == d2);
//}

