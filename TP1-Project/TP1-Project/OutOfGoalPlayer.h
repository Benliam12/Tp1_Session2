/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: OutOfGoalPlayer.h
 * But: Classe abstraite servant a la non répétition des surchages d'opérateur. Sera hérité par Défenseur et Avant
 *      Contiendra également les méthodes communes entre ces 2 classes.
 *      Addition de cette classe afin de facilite et de rendre plus logique le développement du TP1.
 * Date: 26 fevrier 2019
*===================================================================================================*/
#pragma once

#include "Fiche.h"
#include "Joueur.h"

class OutOfGoalPlayer : public Joueur
{
protected:
	Fiche* fiche = nullptr;
	void deleteFiche();
public:
	void setFiche(Fiche const &f);
	void setFiche(int PJ, int buts, int passes);
	void setFiche();
	void copy(OutOfGoalPlayer const &p2);
	virtual void show(std::ostream &flux) const;


	OutOfGoalPlayer & operator=(OutOfGoalPlayer const &p1);
	OutOfGoalPlayer & operator+=(Fiche &f2);

	Fiche* getFiche() const;

	virtual ~OutOfGoalPlayer();
	OutOfGoalPlayer();
	OutOfGoalPlayer(OutOfGoalPlayer const &p);
	OutOfGoalPlayer(string nom, string prenom, int numero);
};
