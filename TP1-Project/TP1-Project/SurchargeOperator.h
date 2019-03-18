/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: SurchargeOperator.h
 * But: Contient les differentes declarations des surchages d'operateurs non-appropriees a une classe
 * Date: 26 fevrier 2019
*===================================================================================================*/
#pragma once

#include "Avant.h"
#include "Joueur.h"
#include "Defenseur.h"

using std::ostream;

ostream & operator <<(ostream &flux, Joueur&joueur);
ostream & operator <<(ostream &flux, Fiche& fiche);

bool operator ==(Fiche const& f1, Fiche const& f2);

bool operator ==(Defenseur const &p1, Defenseur const &p2);
bool operator ==(Defenseur const &p1, Avant const &p2);
bool operator ==(Avant const &p1, Defenseur const &p2);
bool operator ==(Avant const &p1, Avant const &p2);

bool operator !=(Defenseur const &p1, Defenseur const &p2);
bool operator !=(Defenseur const &p1, Avant const &p2);
bool operator !=(Avant const &p1, Defenseur const &p2);
bool operator !=(Avant const &p1, Avant const &p2);