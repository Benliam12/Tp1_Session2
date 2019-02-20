#pragma once
#include <ostream>

class Fiche
{
protected:
	int PJ;
	int buts;
	int passes;
public:
	void setPJ(int PJ);
	void setButs(int but);
	void setPasses(int passes);

	int getPJ() const;
	int getNbButs() const;
	int getNbPasse() const;

	void show(std::ostream &flux);


	Fiche(Fiche const &fiche);
	Fiche(int PJ, int buts, int passes);
	Fiche();
	~Fiche();
};

