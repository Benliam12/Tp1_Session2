/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: SurchargeOperator.h
 * But: Contient les differentes declarations des surchages d'operateurs non-appropriees a une classe
 * Date: 26 fevrier 2019
*===================================================================================================*/
#pragma once

#include "OutOfGoalPlayer.h"
#include "Joueur.h"
#include "Defenseur.h"

using std::ostream;

ostream & operator <<(ostream &flux, Joueur&joueur);
ostream & operator <<(ostream &flux, Fiche& fiche);
bool operator ==(OutOfGoalPlayer const &p1, OutOfGoalPlayer const &p2);
bool operator ==(Fiche const& f1, Fiche const& f2);
bool operator !=(OutOfGoalPlayer const &p1, OutOfGoalPlayer const &p2);
