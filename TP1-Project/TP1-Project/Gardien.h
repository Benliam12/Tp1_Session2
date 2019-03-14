#pragma once

#include <string>
#include "Joueur.h"

using std::string;

class Gardien : public Joueur
{
public:
	virtual void show(std::ostream &flux) const;

	Gardien & operator=(Gardien const &g);

	Gardien(string nom, string prenom, int numero);
	Gardien();
	~Gardien();
};
