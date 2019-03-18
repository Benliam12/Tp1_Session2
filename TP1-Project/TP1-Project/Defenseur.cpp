/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: Defenseur.cpp
 * But: La classe defenseurs contients les attributs d'un joueur defenseur.
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "SurchargeOperator.h"
#include "Defenseur.h"

// #####################################################
// ######### Constructeur de la classe #################
// #####################################################

Defenseur::Defenseur()
{
	this->setFiche();
}

Defenseur::Defenseur(Defenseur const &defenseur) : Joueur(defenseur.getName(), defenseur.getFirstName(), defenseur.getNumero())
{
	this->setFiche(*defenseur.getFiche());
}

Defenseur::Defenseur(string nom, string prenom, int numero) : Joueur(nom, prenom, numero)
{
	this->setFiche();
}

Defenseur::Defenseur(string nom, string prenom, int numero, Fiche const &fiche) : Joueur(nom, prenom, numero)
{
	this->setFiche(fiche);
}

Defenseur::Defenseur(string nom, string prenom, int numero, int PJ, int buts, int passes) : Joueur(nom, prenom, numero)
{
	Fiche f(PJ, buts, passes);
	this->setFiche(f);
}

// #####################################################
// ########## Destructeur de la classe #################
// #####################################################

Defenseur::~Defenseur()
{
	this->deleteFiche();
}

// #####################################################
// ######## Methodes sans retour de la classe ##########
// #####################################################

void Defenseur::copy(Defenseur const &p2)
{
	this->setFiche(*p2.getFiche());
	this->setFirstName(p2.getFirstName());
	this->setName(p2.getName());
	this->setNumero(p2.getNumero());
}

void Defenseur::deleteFiche()
{
	if (this->fiche != nullptr)
	{
		delete this->fiche;
		this->fiche = nullptr;
	}
}

void Defenseur::show(std::ostream& flux) const
{
	Joueur::show(flux);
	flux << "\n Je suis un defenseur\n";

	if (this->fiche != nullptr)
	{
		this->fiche->show(flux);
	}
}

// #####################################################
// ############ Getters de la classe ###################
// #####################################################

Fiche* Defenseur::getFiche() const
{
	return this->fiche;
}

bool Defenseur::equals(Fiche const& fiche) const
{
	return (*this->fiche == fiche);
}

// #####################################################
// ############ Setters de la classe ###################
// #####################################################

void Defenseur::setFiche()
{
	this->deleteFiche();

	Fiche* f = new Fiche();
	this->fiche = f;
}

void Defenseur::setFiche(Fiche const& f)
{
	this->deleteFiche();

	Fiche* f2 = new Fiche(f);
	this->fiche = f2;
}

void Defenseur::setFiche(int PJ, int buts, int passes)
{
	this->deleteFiche();

	Fiche fiche(PJ, buts, passes);
	this->setFiche(fiche);
}

// #####################################################
// ########### Operateurs de la classe #################
// #####################################################

Defenseur& Defenseur::operator+=(Fiche& f2)
{
	*this->fiche += f2;
	return *this;
}

Defenseur& Defenseur::operator=(Defenseur const &d2)
{
	this->copy(d2);
	return *this;
}

