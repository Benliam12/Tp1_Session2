/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: Centre.cpp
 * But: Contient les informations d'un joueur de centre
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "Centre.h"

// #####################################################
// ######### Constructeur de la classe #################
// #####################################################

Centre::Centre() : Avant(){}

Centre::Centre(Centre const& c) : Avant(c.getName(),c.getFirstName(), c.getNumero()){}

Centre::Centre(std::string nom, std::string prenom, int numero) : Avant(nom, prenom, numero){}

// #####################################################
// ########## Destructeur de la classe #################
// #####################################################

Centre::~Centre(){}

// #####################################################
// ######## Methodes sans retour de la classe ##########
// #####################################################

void Centre::show(std::ostream &flux) const
{
	Avant::show(flux);
	flux << std::endl;
	if (this->fiche != nullptr)
	{
		this->fiche->show(flux);
	}

	flux << "\n Je joue au centre\n";
}

// #####################################################
// ########### Operateurs de la classe #################
// #####################################################

Centre& Centre::operator=(Centre const& c)
{
	this->copy(c);
	return *this;
}

