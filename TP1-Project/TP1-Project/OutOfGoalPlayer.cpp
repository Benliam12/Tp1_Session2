/*==================================================================================================
 * Auteur: William D'Anjou
 * Laboratoire : TP1
 * Fichier: OutOfGoalPlayer.h
 * But: Classe abstraite servant a la non répétition des surchages d'opérateur. Sera hérité par Défenseur et Avant
 *      Contiendra également les méthodes communes entre ces 2 classes.
 *      Addition de cette classe afin de facilite et de rendre plus logique le développement du TP1.
 * Date: 26 fevrier 2019
*===================================================================================================*/

#include "OutOfGoalPlayer.h"

// #####################################################
// ############ Getters de la classe ###################
// #####################################################

/**
 * Retourne le pointeur de la fiche
 *
 * @return Pointeur vers la fiche
 */
Fiche* OutOfGoalPlayer::getFiche() const 
{
	return this->fiche;
}

// #####################################################
// ############ Setters de la classe ###################
// #####################################################

/**
 * Defini le pointeur vers la fiche du joueur. La fiche est une fiche par defaut (donc initie a 0)
 */
void OutOfGoalPlayer::setFiche()
{
	this->deleteFiche();

	Fiche* f = new Fiche();
	this->fiche = f;
}

/**
 * Defini le pointeur vers la fiche du joueur
 *
 * @param fiche Objet fiche a associer
 */
void OutOfGoalPlayer::setFiche(Fiche& fiche)
{
	this->deleteFiche();

	Fiche* f = new Fiche(fiche);
	this->fiche = f;
}

void OutOfGoalPlayer::setFiche(int PJ, int buts, int passes)
{
	Fiche fiche(PJ, buts, passes);
	this->setFiche(fiche);
}

// #####################################################
// ######## Methodes sans retour de la classe ##########
// #####################################################

/**
 * Detruit le pointeur fiche
 */
void OutOfGoalPlayer::deleteFiche()
{
	if (this->fiche != nullptr)
	{
		delete this->fiche;
		this->fiche = nullptr;
	}
}

OutOfGoalPlayer::~OutOfGoalPlayer()
{
	
}

//TODO: ADD COMMENTS

OutOfGoalPlayer::OutOfGoalPlayer() : Joueur() {}

OutOfGoalPlayer::OutOfGoalPlayer(OutOfGoalPlayer const& p)
{
	this->setFiche(*p.getFiche());
	this->nom = p.getName();
	this->prenom = p.getFirstName();
	this->numero = p.getNumero();
}

OutOfGoalPlayer::OutOfGoalPlayer(string nom, string prenom, int numero) : Joueur(nom, prenom, numero){}

bool OutOfGoalPlayer::equals(OutOfGoalPlayer& p2)
{
	return(
		this->nom    == p2.getName()      &&
		this->prenom == p2.getFirstName() &&
		this->numero == p2.getNumero()    &&
		this->fiche  == p2.getFiche()
		);
}

OutOfGoalPlayer& OutOfGoalPlayer::operator+=(Fiche& f2)
{
	*this->fiche += f2;
	return *this;
}

OutOfGoalPlayer& OutOfGoalPlayer::operator=(OutOfGoalPlayer const &d2)
{
	this->setFiche(*d2.getFiche());
	this->setFirstName(d2.getFirstName());
	this->setName(d2.getName());
	this->setNumero(d2.getNumero());

	return *this;
}