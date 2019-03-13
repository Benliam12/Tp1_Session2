#pragma once
#include "Avant.h"

class Centre : public Avant
{
public:

	Centre operator=(Centre const &c);

	Centre(std::string nom, std::string prenom, int numero);
	Centre();
	~Centre();
};

