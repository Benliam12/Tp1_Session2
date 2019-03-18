/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: Fiche.cpp
 * But: La classe Fiche sert a contenir les informations sur un score qui sera attribue a un joueur
 * Date: 26 fevrier 2019
*===================================================================================================*/

#pragma once
#include <ostream>

class Fiche
{
protected:
	int PJ;
	int buts;
	int passes;

public:
	void setPJ(int PJ);
	void setButs(int but);
	void setPasses(int passes);

	int getPJ() const;
	int getNbButs() const;
	int getNbPasse() const;

	bool equals(Fiche const &fiche) const;

	void show(std::ostream &flux) const;

	Fiche & operator+=(Fiche const &f2);

	Fiche(Fiche const &fiche);
	Fiche(int PJ, int buts, int passes);
	Fiche();
	virtual ~Fiche();
};

Fiche operator+(Fiche const &f1, Fiche const &f2);