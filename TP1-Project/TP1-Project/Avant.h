#pragma once
#include "Joueur.h"
#include "OutOfGoalPlayer.h"

class Avant : public Joueur, OutOfGoalPlayer
{
public:
	Avant();
	~Avant();
};

