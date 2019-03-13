/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: Joueur.h
 * But: La classe joueur contients les differents attributs d'un joueur
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "Joueur.h"

using std::string;

string Joueur::getFirstName() const
{
	return this->prenom;
}

string Joueur::getName() const
{
	return this->nom;
}

int Joueur::getNumero() const
{
	return this->numero;
}

void Joueur::setFirstName(string firstName)
{
	this->prenom = firstName;
}

void Joueur::setName(string name)
{
	this->nom = name;
}

void Joueur::setNumero(int numero)
{
	this->numero = numero;
}

/**
 * Affiche le message du joueur
 * 
 * @param flux object ostream
 */
void Joueur::show(std::ostream &flux) const
{
	flux << "Je suis " << this->prenom << " " << this->nom << ". Mon numero est " << this->numero;
}

Joueur::Joueur(string nom, string prenom, int numero)
{
	this->nom = nom;
	this->prenom = prenom;
	this->numero = numero;
}

Joueur::Joueur()
{
	this->nom = "";
	this->prenom = "";
	this->numero = 0;
}


Joueur::~Joueur()
{
}
