/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: Avant.cpp
 * But: Contient les informations d'un joueur qui joue a l'avant
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "SurchargeOperator.h"
#include "Avant.h"

// #####################################################
// ########## Constructeurs de la classe ###############
// #####################################################
Avant::Avant() : Joueur()
{
	this->setFiche();
}

Avant::Avant(Avant const& a)
{
	this->copy(a);
}

Avant::Avant(std::string nom, std::string prenom, int numero) : Joueur(nom, prenom, numero)
{
	this->setFiche();
}

// #####################################################
// ########### Destructeur de la classe ################
// #####################################################

Avant::~Avant()
{
	
}

// #####################################################
// ############ Setters de la classe ###################
// #####################################################

void Avant::setFiche()
{
	this->deleteFiche();

	Fiche* f = new Fiche();
	this->fiche = f;
}

void Avant::setFiche(Fiche const& f)
{
	this->deleteFiche();

	Fiche* f2 = new Fiche(f);
	this->fiche = f2;
}

void Avant::setFiche(int PJ, int buts, int passes)
{
	this->deleteFiche();

	Fiche fiche(PJ, buts, passes);
	this->setFiche(fiche);
}

// #####################################################
// ############ Getters de la classe ###################
// #####################################################

Fiche* Avant::getFiche() const
{
	return this->fiche;
}

bool Avant::equals(Fiche const& fiche) const
{
	return (*this->fiche == fiche);
}


// #####################################################
// ######## Methodes sans retour de la classe ##########
// #####################################################

void Avant::copy(Avant const& p2)
{
	this->setFiche(*p2.getFiche());
	this->setFirstName(p2.getFirstName());
	this->setName(p2.getName());
	this->setNumero(p2.getNumero());
}

void Avant::deleteFiche()
{
	if (this->fiche != nullptr)
	{
		delete this->fiche;
		this->fiche = nullptr;
	}
}

void Avant::show(std::ostream& flux) const
{
	Joueur::show(flux);
}

// #####################################################
// ########### Operateurs de la classe #################
// #####################################################

Avant& Avant::operator+=(Fiche& f2)
{
	*this->fiche += f2;
	return *this;
}

Avant& Avant::operator=(Avant const& p1)
{
	this->copy(p1);
	return *this;
}
