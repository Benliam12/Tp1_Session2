/*==================================================================================================
 * Auteur: Nicolas Bittner-Deland & William D'Anjou
 * Laboratoire : TP1
 * Fichier: Joueur.h
 * But: La classe joueur contients les differents attributs d'un joueur
 * Date: 26 fevrier 2019
*===================================================================================================*/
#pragma once

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

	string getName() const;
	string getFirstName() const;
	int getNumero() const;

	Joueur & operator=(Joueur & j);

	Joueur();
	Joueur(string nom, string prenom, int numero);
	virtual ~Joueur();
};

