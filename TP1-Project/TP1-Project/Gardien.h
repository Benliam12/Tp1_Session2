/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire: TP1
 * Fichier: Defenseur.cpp
 * But: La classe defenseurs contients les attributs d'un joueur gardien
 * Date: 26 fevrier 2019
*===================================================================================================*/
#pragma once

#include <string>
#include "Joueur.h"

using std::string;

class Gardien : public Joueur
{
public:
	virtual void show(std::ostream &flux) const;

	Gardien & operator=(Gardien const &g);

	Gardien(string nom, string prenom, int numero);
	Gardien();
	~Gardien();
};
