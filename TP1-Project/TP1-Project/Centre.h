#pragma once
#include "Avant.h"

class Centre : public Avant
{
public:

	Centre & operator=(Centre const &c);

	virtual void show(std::ostream& flux) const;

	Centre(std::string nom, std::string prenom, int numero);
	Centre(Centre const &c);
	Centre();
	~Centre();
};

