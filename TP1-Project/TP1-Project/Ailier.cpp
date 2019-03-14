#include "Ailier.h"
#include <iostream>


Ailier::Ailier() : Avant()
{

}

Ailier::Ailier(Ailier& a2, Fiche& f)
{
	*this = a2;

	this->setFiche(f);
}

Ailier::Ailier(Ailier& a2, int PJ, int but, int passes)
{
	Fiche f(PJ, but, passes);

	*this = a2;
	this->setFiche(f);
}

Ailier::Ailier(std::string nom, std::string prenom, int numero, std::string position) : Avant(nom, prenom, numero)
{
	this->setPosition(position);
	this->setFiche();
}

Ailier::Ailier(std::string nom, std::string prenom, int numero, std::string position, Fiche const& f1) : Avant(nom, prenom, numero)
{
	this->position = position;
	this->setFiche(f1);
}

std::string Ailier::getPosition() const
{
	return this->position;
}

Ailier::~Ailier()
{

}


void Ailier::setPosition(std::string position)
{
	this->position = position;
}

Ailier& Ailier::operator=(Ailier const& a2)
{
	this->copy(a2);
	this->position = a2.getPosition();
	
	return *this;
}

void Ailier::show(std::ostream& flux) const
{
	Avant::show(flux);
	flux << std::endl;
	if (this->fiche != nullptr)
	{
		this->fiche->show(flux);
	}

	flux << "\n\n Je joue a l'aile "<< this->position << "\n";
}


