#include <iostream>
#include "Fiche.h"


void Fiche::show(std::ostream& flux)
{
	flux << std::endl << " PJ " << " B " << " P " << std::endl;
	flux << " " << this->PJ << " " << this->buts << " " << this->passes;
}

//Constructeurs de la classe fiche
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


//Destructeur de la classe Fiche
Fiche::~Fiche()
{
	std::cout << "Destruction d'une fiche!" << std::endl;
}
