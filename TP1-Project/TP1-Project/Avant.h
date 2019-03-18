/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: Avant.h
 * But: Contient les informations d'un joueur qui joue a l'avant
 * Date: 26 fevrier 2019
*===================================================================================================*/

#pragma once
#include "Defenseur.h"
#include "Joueur.h"

class Avant : public Joueur
{
protected:
	Fiche* fiche = nullptr;
	void deleteFiche();
public:
	Avant & operator=(Avant const &p1);
	Avant & operator+=(Fiche &f2);

	Avant();
	Avant(Avant const &a);
	Avant(std::string nom, std::string prenom, int numero);
	virtual ~Avant();

	bool equals(Fiche const &fiche) const;

	Fiche* getFiche() const;

	void copy(Avant const &p2);
	void setFiche(Fiche const &f);
	void setFiche(int PJ, int buts, int passes);
	void setFiche();
	virtual void show(std::ostream &flux) const;
};

