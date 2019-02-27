/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: Defenseur.cpp
 * But: La classe defenseurs contients les attributs d'un joueur defenseur.
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "Defenseur.h"

// #####################################################
// ############ Getters de la classe ###################
// #####################################################

/**
 * Retourne le pointeur de la fiche
 * 
 * @return Pointeur vers la fiche
 */
Fiche* Defenseur::getFiche()
{
	return this->fiche;
}

// #####################################################
// ############ Setters de la classe ###################
// #####################################################

/**
 * Defini le pointeur vers la fiche du joueur
 * 
 * @param fiche Pointeur vers la fiche a associer
 */
void Defenseur::setFiche(Fiche* fiche)
{
	this->fiche = fiche;
}

// #####################################################
// ######## Methodes sans retour de la classe ##########
// #####################################################

/**
 * Affiche l'objet defenseur suivant un certain format d'affichage.
 *
 * @param flux Le flux qui sera affiche
 */
void Defenseur::show(std::ostream& flux)
{
	flux << "\nJe suis un defenseur";
}

// #####################################################
// ######### Constructeur de la classe #################
// #####################################################

/**
 * Constructeur nul
 */
Defenseur::Defenseur() : Joueur()
{

}

Defenseur::Defenseur(Defenseur& defenseur)
{
	this->nom = defenseur.getName();
	this->prenom = defenseur.getFirstName();
	this->numero = defenseur.getNumero();
	this->fiche = defenseur.getFiche();
}

Defenseur::Defenseur(string nom, string prenom, int numero)
{
	
}

Defenseur::Defenseur(string nom, string prenom, int numero, Fiche fiche)
{
	
}

Defenseur::Defenseur(string nom, string prenom, int numero, int PJ, int buts, int passes)
{
	
}



// #####################################################
// ########## Destructeur de la classe #################
// #####################################################

Defenseur::~Defenseur()
{
}
