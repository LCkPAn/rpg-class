#include "Personnage.h"
#include "Branlotin.h"
#include "Godiche.h"
#include "Neurd.h"
#include "Noteyaf.h"
#include "Toilla.h"
#include "Zifahk.h"
#include "Zurc.h"
#include "Mahc.h"
#include "read.h"
#include <vector>
void showZurc(vector<string> tab) {
	for (int i = 0; i < 53; i++) {
		cout << tab[i] << endl;
	}
}
void showMahc(vector<string> tab) {
	for (int i = 54; i < 108; i++) {
		cout << tab[i] << endl;
	}
}
void showNoteyaf(vector<string> tab) {
	for (int i = 109; i < 160; i++) {
		cout << tab[i] << endl;
	}
}
void showToilla(vector<string> tab) {
	for (int i = 163; i < 210; i++) {
		cout << tab[i] << endl;
	}

}
void showZifahk(vector<string> tab) {
	for (int i = 215; i < 255; i++) {
		cout << tab[i] << endl;
	}
}void showZifahkR(vector<string> tab) {
	for (int i = 256; i < 290; i++) {
		cout << tab[i] << endl;
	}
}

int main() {
	vector <string> tab;
	std::ifstream Handle("test.txt");
	if (Handle.is_open()) {
		std::string CurrLine;
		while (getline(Handle, CurrLine)) {
			tab.push_back(CurrLine);
		}
		Handle.close();
	}
	

	Personnage p1("Le simplet", 50, 30, 15);

	Branlotin p2("Le branlotin", 100, 50, 10);

	Godiche p3("Le godiche", 150, 50, 10);

	Neurd p4("Le neurd", 100, 0, 150);

	Mahc e1("Mahc, le sous-fifre ", 100, 0, 100);

	Zurc e2("Zurc, le stagiaire", 100, 0, 100);

	Noteyaf e3("Noteyaf, le passioné ", 100, 0, 100);

	Toilla e4("Toilla, le mâche-laurier ", 100, 0, 100);

	Zifahk e5("Zifahk, le peintre", 100, 0, 100);

	
	//first fight
	cout << "texte1" << endl;
	int ennemy = 0;
	int compTour = 0;
	while (ennemy < 5) {
		while (compTour != 3) {
			switch (ennemy) {
			case 0:
				showNoteyaf(tab);
				break;
			case 1:
				showToilla(tab);
				break;
			case 2:
				showMahc(tab);
				break;
			case 3:
				showZifahk(tab);
				break;
			case 4:
				break;
			}
			compTour += 1;
			int rep = 0;
			cin >> rep;
			switch (rep)
			{
			case 1:

				break;
			case 2:

				break;

			case 3:
				break;
			}



		}
	}
}
