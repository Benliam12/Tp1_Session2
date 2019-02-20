#pragma once

#include <iostream>

using std::string;

class Joueur
{
private:
	Joueur();
protected:
	int numero;
	string nom;
	string prenom;

	Joueur(string nom, string prenom, int numero);
public:
	~Joueur();
};

