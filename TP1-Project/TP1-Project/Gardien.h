#pragma once

#include <string>
#include "Joueur.h"

using std::string;

class Gardien : public Joueur
{
public:

	Gardien operator=(Gardien &g);

	Gardien(string nom, string prenom, int numero);
	Gardien();
	~Gardien();
};
