/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: SurchargeOperator.cpp
 * But: Contient les differentes definitions des surchages d'operateurs
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "SurchargeOperator.h"

ostream & operator <<(ostream &flux, Joueur &joueur)
{
	joueur.show(flux);

	flux << joueur.getName();
	return flux;
}

ostream & operator <<(ostream &flux, Fiche &fiche)
{
	fiche.show(flux);
	return flux;
}

bool operator ==(Defenseur const &d1, Defenseur const &d2)
{

}

Joueur operator=(Joueur const& p1, Joueur const& p2)
{
	Joueur j;
	return j;
}
