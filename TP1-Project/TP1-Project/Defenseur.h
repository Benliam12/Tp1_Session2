/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: Defenseur.h
 * But: La classe defenseurs contients les attributs d'un joueur defenseur.
 * Date: 26 fevrier 2019
*===================================================================================================*/

#pragma once

//Inclusions
#include "Joueur.h"
#include "Fiche.h"

class Defenseur : public Joueur
{
protected:
	Fiche* fiche = nullptr;
public:
	virtual void show(std::ostream &flux);
	void setFiche(Fiche* f);
	Fiche* getFiche();

	Defenseur();
	Defenseur(Defenseur &defenseur);
	Defenseur(string nom, string prenom, int numero);
	Defenseur(string nom, string prenom, int numero, Fiche fiche);
	Defenseur(string nom, string prenom, int numero, int PJ, int buts, int passes);
	virtual ~Defenseur();
};

