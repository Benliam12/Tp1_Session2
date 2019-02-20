/*******************
 *Auteur : William D'Anjou
 *Laboratoire: TP1
 *Fichier: main.cpp
 *But: Generer //TODO: PUT SOMETHING HERE
 *Date: 15 mars 2019
 */

#include <iostream>
#include <string>
#include "Fiche.h"
#include "Gardien.h"
#include "Defenseur.h"
#include "Ailier.h"
#include "Centre.h"

using namespace std;

int main()
{
	locale::global(locale{ "" });
	Fiche f1(2, 2, 0), f2(10, 3, 14), f3(4, 2, 2), f4(20, 13, 12), f5(f4), f6, f7;
	Gardien g1("Brodeur", "Martin", 30), g2(g1), g3;
	Defenseur d1("Subban", "PK", 76, f1);
	Defenseur d2("McDonagh", "Ryan", 27, 56, 2, 30);
	Defenseur d3(d2), d4("Weber", "Shea", 6), d5;
	Ailier a1("Sharp", "Patrick", 10, "gauche");
	Ailier a2("Kane", "Patrick", 88, "droite", f1), a3(a1), a4(a1, f2), a5(a2, 10, 5, 10), a6;
	Centre c1("Crosby", "Sidney", 87), c2(c1), c3;

	f6 = f1 + f2;
	f4 += f1;
	f7 = f3;

	cout << "Présentation des fiches:\n";
	cout << "Fiche 1: \n" << f1 << endl;
	cout << "Fiche 2: \n" << f2 << endl;
	cout << "Fiche 3: \n" << f3 << endl;
	cout << "Fiche 4: \n" << f4 << endl;
	cout << "Fiche 5: \n" << f5 << endl;
	cout << "Fiche 6: \n" << f6 << endl;
	cout << "Fiche 7: \n" << f7 << endl;

	g3 = g2;

	g2.setNom("Gagnon");
	g3.setNom("Lamothe");


	cout << "\nPrésentation des gardiens:\n";
	cout << "Gardien 1: \n" << g1 << endl;
	cout << "Gardien 2: \n" << g2 << endl;
	cout << "Gardien 3: \n" << g3 << endl;

	d4 = d2;
	d3.setFiche(f6);
	d4.setFiche(f3);
	d5.setNom("Lamothe");
	d5.setPrenom("Régis");
	d5.setNumero(10);
	d5.setFiche(10, 4, 5);

	d3 += f1;


	cout << "\nPrésentation des défenseurs:\n";
	cout << "Défenseur 1: \n" << d1 << endl;
	cout << "Défenseur 2: \n" << d2 << endl;
	cout << "Défenseur 3: \n" << d3 << endl;
	cout << "Défenseur 4: \n" << d4 << endl;
	cout << "Défenseur 5: \n" << d5 << endl;

	a6 = a2;
	a6 += f4;
	a1 += f2;
	a3 += f3;
	a6.setPosition("gauche");

	cout << "\nPrésentation des ailiers:\n";
	cout << "Ailier 1: \n" << a1 << endl;
	cout << "Ailier 2: \n" << a2 << endl;
	cout << "Ailier 3: \n" << a3 << endl;
	cout << "Ailier 4: \n" << a4 << endl;
	cout << "Ailier 5: \n" << a5 << endl;
	cout << "Ailier 6: \n" << a6 << endl;

	c3 = c1;
	c1 += f1;
	c2 += f2;
	c3 += f3;

	cout << "\nPrésentation des centres:\n";
	cout << "Centre 1: \n" << c1 << endl;
	cout << "Centre 2: \n" << c2 << endl;
	cout << "Centre 3: \n" << c3 << endl;

	if (d1 == d2) cout << "Défenseur 1 == défenseur 2\n";
	if (d1 == a2) cout << "Défenseur 1 == ailier 2\n";
	if (d1 == c1) cout << "Défenseur 1 == centre 1\n";
	if (a2 == d1) cout << "Ailier 2 == defenseur 1\n";
	if (c1 == a2) cout << "Centre 1 == ailier 2\n";

	if (d1 != d2) cout << "Défenseur 1 != défenseur 2\n";
	if (d1 != a2) cout << "Défenseur 1 != ailier 2\n";
	if (d1 != c1) cout << "Défenseur 1 != centre 1\n";
	if (a2 != d1) cout << "Ailier 2 != defenseur 1\n";
	if (c1 != a2) cout << "Centre 1 != ailier 2\n";

	system("PAUSE");
	return 0;
}