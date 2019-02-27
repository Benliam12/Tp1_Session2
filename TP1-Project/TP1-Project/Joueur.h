/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: Joueur.h
 * But: La classe joueur contients les differents attributs d'un joueur
 * Date: 26 fevrier 2019
*===================================================================================================*/
#pragma once

#include <iostream>
#include <string>

using std::string;

class Joueur
{
protected:
	int numero;
	string nom;
	string prenom;
public:
	virtual void show(std::ostream &flux) const;

	void setName(string name);
	void setFirstName(string firstName);
	void setNumero(int numero);

	string getName();
	string getFirstName();
	int getNumero();

	Joueur();
	Joueur(string nom, string prenom, int numero);
	virtual ~Joueur();
};

