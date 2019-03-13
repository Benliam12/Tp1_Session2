/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: Defenseur.cpp
 * But: La classe defenseurs contients les attributs d'un joueur defenseur.
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "Defenseur.h"

// #####################################################
// ######## Methodes sans retour de la classe ##########
// #####################################################

/**
 * Affiche l'objet defenseur suivant un certain format d'affichage.
 *
 * @param flux Le flux qui sera affiche
 */
void Defenseur::show(std::ostream& flux)
{
	flux << "\nJe suis un defenseur";

	if(this->fiche != nullptr)
	{
		this->fiche->show(flux);
	}
}


// #####################################################
// ######### Constructeur de la classe #################
// #####################################################

/**
 * Constructeur nul
 */
Defenseur::Defenseur()
{
	this->setFiche();
}

/*
 * Constructeur a l'aide d'information d'un autre defenseur
 * 
 * @param defenseur Reference vers l'objet defenseur a qui on doit prendre les informations
 */
Defenseur::Defenseur(Defenseur& defenseur) : OutOfGoalPlayer(defenseur.getName(), defenseur.getFirstName(), defenseur.getNumero())
{
	this->setFiche(*defenseur.getFiche());
}

/**
 * Constructeur a l'aide du nom, prenom et numero d'un joueur. Genere une fiche vide qui s'ajoute au defenseur
 * 
 * @param nom Nom du defenseur
 * @param prenom Prenom du defenseur
 * @param numero Numero du defenseur
 */
Defenseur::Defenseur(string nom, string prenom, int numero) : OutOfGoalPlayer(nom, prenom, numero)
{
	this->setFiche();
}

/**
 * Constructeur a l'aide du nom, prenom, numero et fiche d'un joueur.
 *
 * @param nom Nom du defenseur
 * @param prenom Prenom du defenseur
 * @param numero Numero du defenseur
 * @param fiche Objet fiche qui contient la fiche du joueur
 */
Defenseur::Defenseur(string nom, string prenom, int numero, Fiche fiche) : OutOfGoalPlayer(nom, prenom, numero)
{
	this->setFiche(fiche);
}

/**
 * Constructeur a l'aide du nom, prenom, numero et des informations d'une fiche.
 *
 * @param nom Nom du defenseur
 * @param prenom Prenom du defenseur
 * @param numero Numero du defenseur
 * @param PJ PJ de la fiche du joueur
 * @param buts Nombre de buts de la fiche du joueur
 * @param passes Nombre de passes de la fiche du joueur
 */
Defenseur::Defenseur(string nom, string prenom, int numero, int PJ, int buts, int passes) : OutOfGoalPlayer(nom, prenom, numero)
{
	Fiche f(PJ, buts, passes);
	this->setFiche(f);
}

// #####################################################
// ########## Destructeur de la classe #################
// #####################################################

Defenseur::~Defenseur()
{
	this->deleteFiche();
}

Defenseur& Defenseur::operator=(Defenseur& d2)
{
	//TODO: CHECK IF THIS WILL WORK
	(OutOfGoalPlayer) *this = (OutOfGoalPlayer)d2;
	return *this;
}


