/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: Defenseur.h
 * But: La classe defenseurs contients les attributs d'un joueur defenseur.
 * Date: 26 fevrier 2019
*===================================================================================================*/

#pragma once

//Inclusions
#include "Fiche.h"

class Defenseur : public Joueur
{
protected:
	Fiche* fiche = nullptr;
	void deleteFiche();
public:
	bool equals(Fiche const &fiche) const;

	Defenseur & operator=(Defenseur const &d2);
	Defenseur & operator+=(Fiche &f2);

	Defenseur();
	Defenseur(Defenseur const &defenseur);
	Defenseur(string nom, string prenom, int numero);
	Defenseur(string nom, string prenom, int numero, Fiche fiche);
	Defenseur(string nom, string prenom, int numero, int PJ, int buts, int passes);
	virtual ~Defenseur();

	Fiche* getFiche() const;

	void copy(Defenseur const &p2);
	void setFiche();
	void setFiche(Fiche const &f);
	void setFiche(int PJ, int buts, int passes);
	virtual void show(std::ostream &flux) const;

};
