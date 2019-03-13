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

bool operator !=(Defenseur const &d1, Defenseur const &d2)
{
	return !(d1 == d2);
}

