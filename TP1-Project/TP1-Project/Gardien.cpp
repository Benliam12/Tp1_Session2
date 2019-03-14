#include "Gardien.h"



Gardien::Gardien() : Joueur()
{

}

Gardien::Gardien(string nom, string prenom, int numero) : Joueur(nom, prenom, numero)
{
	
}

Gardien::~Gardien()
{

}

Gardien & Gardien::operator=(Gardien const &g)
{
	return *this;
}

void Gardien::show(std::ostream& flux) const
{
	Joueur::show(flux);
	flux << "\n Je suis un gardien";
}


