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
#include "Profs.h"
#include <vector>
void showProf(vector<string> tab,int start, int end) {
	for (int i = start; i < end; i++) {
		cout << tab[i] << endl;
	}
}

//zurc 0 i < 53
//Cham 54; i < 108
// Fayeton int i = 109; i < 160
// Toilla 163; i < 210
//Zifhak  215; i < 255
//ZifhakR 256; i < 290

int main() {
	SetConsoleOutputCP(1252); 
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
	Profs &ennemy = e1;
	int tourEnnemy = 0;
	Jouable &player= p2;
	int compTour = 0;
	int rep = 0;
	e1.startFight(p3);

	/*while (tourEnnemy < 5) {
		system("CLS");
		compTour = 0;
		while (compTour != 3) {
			switch (tourEnnemy) {
			case 0:
				showProf(tab,1,53);
				ennemy = e2;
				break;
			case 1:
				showProf(tab,54,108);
				ennemy = e1;
				break;
			case 2:
				showProf(tab,109,160);
				ennemy = e3;
				break;
			case 3:
				showProf(tab,163,210);
				ennemy = e4;
				break;
			case 4:
				showProf(tab, 215, 254);
				ennemy = e5;
				break;
			}
			cout << ennemy.getTab(0+compTour) << endl;
			cout << "1" << ennemy.getTab(3+compTour*3) << " ?" << " 2" << ennemy.getTab(4+compTour * 3) << " ?" << " 3" << ennemy.getTab(5+ compTour * 3) << " ?" << endl;
			cout << "entrez votre réponse" << endl;
			cin >> rep;
			switch (rep)
			{
			case 1:
				player.setMental(player.getMental() + 10);
				compTour += 1;
				break;
			case 2:
				ennemy.startFight(ennemy,player);
				compTour = 3;
				break;
			case 3:
				player.setFlemme(player.getFlemme() + 10);
				compTour += 1;
				break;

			default:
				cout << "Mauvaise Action";
			}
			




		}
		cout << "fin du cours. Cours suivant";
		tourEnnemy += 1;
	}*/
}
