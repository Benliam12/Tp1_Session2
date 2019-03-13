#pragma once
#include "Avant.h"

class Ailier : public Avant
{
private:
	std::string position;
public:
	std::string getPosition();

	void setPosition(std::string position);


	Ailier(std::string nom, std::string prenom, int numero, std::string position);
	Ailier(std::string nom, std::string prenom, int numero, std::string position, Fiche const &f1);
	Ailier(Ailier &a2, Fiche &f);
	Ailier(Ailier &a2, int PJ, int but, int passes);
	Ailier();
	~Ailier();
};

