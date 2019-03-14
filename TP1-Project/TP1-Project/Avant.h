#pragma once
#include "OutOfGoalPlayer.h"

class Avant : public OutOfGoalPlayer
{
public:
	Avant();
	Avant(std::string nom, std::string prenom, int numero);
	~Avant();
};

