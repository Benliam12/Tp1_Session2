/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: Defenseur.cpp
 * But: La classe defenseurs contients les attributs d'un joueur gardien
 * Date: 26 fevrier 2019
*===================================================================================================*/
#include "Gardien.h"

// #####################################################
// ########## Constructeurs de la classe ###############
// #####################################################

Gardien::Gardien() : Joueur(){}

Gardien::Gardien(string nom, string prenom, int numero) : Joueur(nom, prenom, numero){}

// #####################################################
// ########### Destructeur de la classe ################
// #####################################################

Gardien::~Gardien(){}

// #####################################################
// ######## Methodes sans retour de la classe ##########
// #####################################################

void Gardien::show(std::ostream& flux) const
{
	Joueur::show(flux);
	flux << "\n Je suis un gardien";
}

// #####################################################
// ########### Destructeur de la classe ################
// #####################################################

Gardien & Gardien::operator=(Gardien const &g)
{
	return *this;
}