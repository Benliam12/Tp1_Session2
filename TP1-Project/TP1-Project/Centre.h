/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: Centre.h
 * But: Contient les informations d'un joueur de centre
 * Date: 26 fevrier 2019
*===================================================================================================*/


#pragma once
#include "Avant.h"

class Centre : public Avant
{
public:
	Centre & operator=(Centre const &c);

	virtual void show(std::ostream& flux) const;

	Centre(std::string nom, std::string prenom, int numero);
	Centre(Centre const &c);
	Centre();
	~Centre();
};

