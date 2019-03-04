/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: OutOfGoalPlayer.h
 * But: Classe abstraite servant a la non r�p�tition des surchages d'op�rateur. Sera h�rit� par D�fenseur et Avant
 *      Contiendra �galement les m�thodes communes entre ces 2 classes.
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "OutOfGoalPlayer.h"

// #####################################################
// ############ Getters de la classe ###################
// #####################################################

/**
 * Retourne le pointeur de la fiche
 *
 * @return Pointeur vers la fiche
 */
Fiche* OutOfGoalPlayer::getFiche()
{
	return this->fiche;
}

// #####################################################
// ############ Setters de la classe ###################
// #####################################################

/**
 * Defini le pointeur vers la fiche du joueur. La fiche est une fiche par defaut (donc initie a 0)
 */
void OutOfGoalPlayer::setFiche()
{
	this->deleteFiche();

	Fiche* f = new Fiche();
	this->fiche = f;
}

/**
 * Defini le pointeur vers la fiche du joueur
 *
 * @param fiche Objet fiche a associer
 */
void OutOfGoalPlayer::setFiche(Fiche fiche)
{
	this->deleteFiche();

	Fiche* f = new Fiche(fiche);
	this->fiche = f;
}

void OutOfGoalPlayer::setFiche(int PJ, int buts, int passes)
{
	Fiche fiche(PJ, buts, passes);
	this->setFiche(fiche);
}

// #####################################################
// ######## Methodes sans retour de la classe ##########
// #####################################################

/**
 * Detruit le pointeur fiche
 */
void OutOfGoalPlayer::deleteFiche()
{
	if (this->fiche != nullptr)
	{
		delete this->fiche;
		this->fiche = nullptr;
	}
}
