/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: Fiche.cpp 
 * But: La classe Fiche sert a contenir les informations sur un score qui sera attribue a un joueur
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "Fiche.h"

// #####################################################
// ############ Getters de la classe ###################
// #####################################################

int Fiche::getNbButs() const
{
	return this->buts;
}

int Fiche::getNbPasse() const
{
	return this->passes;
}

int Fiche::getPJ() const
{
	return this->PJ;
}

// #####################################################
// ############ Setters de la classe ###################
// #####################################################

void Fiche::setButs(int buts)
{
	if(buts >= 0) // Le nombre de buts se doit d'etre positif
	{
		this->buts = buts;
	}
}

void Fiche::setPasses(int passes)
{
	if(passes >= 0) // Le nombre de passe doit etre positif
	{ 
		this->passes = passes;
	}
}

void Fiche::setPJ(int PJ)
{
	if(PJ >= 0) // Le PJ doit etre positif
	{
		this->PJ = PJ;
	}
}

// #####################################################
// ####### Methodes sans retour de la classe ###########
// #####################################################

bool Fiche::equals(Fiche const& fiche) const
{
	return (fiche.getPJ() == this->PJ &&
		fiche.getNbButs() == this->buts &&
		fiche.getNbPasse() == this->passes);
}

void Fiche::show(std::ostream& flux)
{
	flux << " PJ " << " B " << " P " << std::endl; // En-tete
	flux << " " << this->PJ << " " << this->buts << " " << this->passes; // Score
}

// #####################################################
// ############ Constructeurs de la classe #############
// #####################################################

Fiche::Fiche(Fiche const& fiche)
{
	this->PJ = fiche.getPJ();
	this->buts = fiche.getNbButs();
	this->passes = fiche.getNbPasse();
}

Fiche::Fiche(int PJ, int buts, int passes)
{
	this->PJ = PJ;
	this->buts = buts;
	this->passes = passes;
}

Fiche::Fiche()
{
	this->PJ = 0;
	this->buts = 0;
	this->passes = 0;
}

// #####################################################
// ############ Destructeurs de la classe ##############
// #####################################################

Fiche::~Fiche()
{
	//std::cout << "Destruction d'une fiche!" << std::endl;
}

// #####################################################
// ########### Operateurs de la classe #################
// #####################################################

Fiche& Fiche::operator+=(Fiche const& f2)
{
	this->PJ += f2.getPJ();
	this->buts += f2.getNbButs();
	this->passes += f2.getNbPasse();

	return *this;
}

Fiche operator+(Fiche const &f1, Fiche const &f2)
{
	Fiche cf(f1);
	cf += f2;
	return cf;
}

