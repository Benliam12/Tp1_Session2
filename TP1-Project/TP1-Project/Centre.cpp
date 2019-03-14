#include "Centre.h"



Centre::Centre()
{
}


Centre::~Centre()
{

}

Centre::Centre(Centre const& c) : Avant(c.getName(),c.getFirstName(), c.getNumero()){}


Centre::Centre(std::string nom, std::string prenom, int numero) : Avant(nom, prenom, numero)
{
	
}

void Centre::show(std::ostream &flux) const
{
	Avant::show(flux);
	flux << std::endl;
	if (this->fiche != nullptr)
	{
		this->fiche->show(flux);
	}

	flux << "\n\n Je joue au centre\n";
}

Centre& Centre::operator=(Centre const& c)
{
	this->copy(c);
	return *this;
}

