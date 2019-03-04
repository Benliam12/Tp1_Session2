/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: OutOfGoalPlayer.h
 * But: Classe abstraite servant a la non r�p�tition des surchages d'op�rateur. Sera h�rit� par D�fenseur et Avant
 *      Contiendra �galement les m�thodes communes entre ces 2 classes.
 * Date: 26 fevrier 2019
*===================================================================================================*/
#pragma once

#include "Fiche.h"

class OutOfGoalPlayer
{
protected:
	Fiche* fiche = nullptr;
	void deleteFiche();
public:
	void setFiche(Fiche f);
	void setFiche(int PJ, int buts, int passes);
	void setFiche();

	bool equals();

	Fiche* getFiche();

	virtual ~OutOfGoalPlayer();
	OutOfGoalPlayer();
	OutOfGoalPlayer(OutOfGoalPlayer const &p);
};