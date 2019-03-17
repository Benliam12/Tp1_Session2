/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: Avant.h
 * But: Contient les informations d'un joueur qui joue a l'avant
 * Date: 26 fevrier 2019
*===================================================================================================*/

#pragma once
#include "OutOfGoalPlayer.h"

class Avant : public Joueur
{
protected:
	Fiche* fiche = nullptr;
	void deleteFiche();
public:
	Avant & operator=(Avant const &p1);
	Avant & operator+=(Fiche &f2);

	Avant();
	Avant(std::string nom, std::string prenom, int numero);
	virtual ~Avant();
	
	Fiche* getFiche() const;

	void copy(OutOfGoalPlayer const &p2);
	void setFiche(Fiche const &f);
	void setFiche(int PJ, int buts, int passes);
	void setFiche();
	virtual void show(std::ostream &flux) const;
};

