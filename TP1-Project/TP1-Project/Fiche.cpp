/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: Fiche.cpp 
 * But: La classe Fiche sert a contenir les informations sur un score qui sera attribue a un joueur
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include <iostream>
#include "Fiche.h"

// #####################################################
// ############ Getters de la classe ###################
// #####################################################

/**
 * Retourne le nombre de buts de la fiche
 * 
 * @return Nombre de buts
 */
int Fiche::getNbButs() const
{
	return this->buts;
}

/**
 * Retourne le nombre de passes de la fiche
 *
 * @return Nombre de passes
 */
int Fiche::getNbPasse() const
{
	this->passes;
}

/**
 * Retourne le PJ de la fiche
 *
 * @return PJ
 */
int Fiche::getPJ() const
{
	return this->PJ;
}

// #####################################################
// ############ Setters de la classe ###################
// #####################################################

/**
 * Defini le nombre de buts de la fiche
 * 
 * @param buts Nombre de buts
 */
void Fiche::setButs(int buts)
{
	if(buts >= 0) // Le nombre de buts se doit d'etre positif
	{
		this->buts = buts;
	}
}

/**
 * Defini le nombre de passe de la fiche
 * 
 * @param passes Nombre de passes
 */
void Fiche::setPasses(int passes)
{
	if(passes >= 0) // Le nombre de passe doit etre positif
	{ 
		this->passes = passes;
	}
}

/**
 * Defini le PJ de la fiche
 * 
 * @param PJ
 */
void Fiche::setPJ(int PJ)
{
	if(PJ >= 0) // Le PJ doit etre positif
	{
		this->PJ = PJ;
	}
}

// #####################################################
// ####### Methodes sans retour de la classe ###########
// #####################################################

/**
 * Compare 2 fiche en semble
 * 
 * @param fiche Fiche a comparer
 * @return True/False si les fiches sont identiques
 */
bool Fiche::equals(Fiche const& fiche) const
{
	return (fiche.getPJ() == this->PJ &&
		fiche.getNbButs() == this->buts &&
		fiche.getNbPasse() == this->passes);
}


/**
 * Affiche l'objet fiche suivant un certain format d'affichage.
 * 
 * @param flux Le flux qui sera affiche
 */
void Fiche::show(std::ostream& flux)
{
	flux << std::endl << " PJ " << " B " << " P " << std::endl; // En-tete
	flux << " " << this->PJ << " " << this->buts << " " << this->passes; // Score
}

// #####################################################
// ############ Constructeurs de la classe #############
// #####################################################

/**
 * Construit l'objet fiche a l'aide d'un autre fiche. Copie ses informations.
 * 
 * @param fiche Objet fiche a utiliser
 */
Fiche::Fiche(Fiche const& fiche)
{
	this->PJ = fiche.getPJ();
	this->buts = fiche.getNbButs();
	this->passes = fiche.getNbPasse();
}

/**
 * Construit l'objet fiche a l'aide de statistiques brutes.
 * 
 * @param PJ
 * @param buts Nombre de buts marques
 * @param passes Nombre de passes
 */
Fiche::Fiche(int PJ, int buts, int passes)
{
	this->PJ = PJ;
	this->buts = buts;
	this->passes = passes;
}

/**
 * Constructeur vide. Initialise les valeurs de PJ, buts et passes a 0.
 */
Fiche::Fiche()
{
	this->PJ = 0;
	this->buts = 0;
	this->passes = 0;
}

// #####################################################
// ############ Destructeurs de la classe ##############
// #####################################################

Fiche::~Fiche()
{
	std::cout << "Destruction d'une fiche!" << std::endl;
}
