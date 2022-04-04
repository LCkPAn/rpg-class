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
#include <windows.h>
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
	HWND hwnd = GetForegroundWindow();
	ShowWindow(hwnd, SW_MAXIMIZE);
	SetConsoleOutputCP(1252);
	vector <string> tab;
	std::ifstream Handle("test.txt");//sert a récupérer mes image ascii contenu dans un fichier texte a part
	if (Handle.is_open()) { 
		std::string CurrLine;
		while (getline(Handle, CurrLine)) {
			tab.push_back(CurrLine);
		}
		Handle.close();
	}

	Branlotin p2("Le branlotin", 100, 50, 10);

	Godiche p3("Le godiche", 150, 50, 10);

	Neurd p4("Le neurd", 100, 0, 150);

	Mahc e1("Mahc, le sous-fifre ", 100, 0, 100);

	Zurc e2("Zurc, le stagiaire", 100, 0, 100);

	Noteyaf e3("Noteyaf, le passioné ", 100, 0, 100);

	Toilla e4("Toilla, le mâche-laurier ", 100, 0, 100);

	Zifahk e5("Zifahk, le peintre", 100, 0, 100);
	//first fight
	Profs* ennemy;
	ennemy = &e2;
	int tourEnnemy = 0;
	Jouable* player;
	player = &p2;
	int compTour = 0;
	int rep = 0;
	int result;
	//chois du perso (définis par la dernière question, oui on triche 
	for (int i = 0; i <= 4; i++) {
		cout << player->getPerso(i) << endl;
		cout << endl;
		cout << player->getPerso(5 + i * 4) << endl;
		cout << player->getPerso(6 + i * 4) << endl;
		cout << player->getPerso(7 + i * 4) << endl;
		cout << player->getPerso(8 + i * 4) << endl;
		cout << "entre le numéro de ton choix" << endl;
		cin >> result;
		if (i == 4) {
			switch (result) {
			case 1:
				player = &p2;
				break;
			case 2:
				player = &p3;
				break;
			case 3:
				player = &p4;
				break;
			case 4:
				player = &p3;
				break;
			default : 
				cout << "tu t'es tromper t'es un boulet ! tu seras donc un brenletin"<< endl;
				player = &p2;
				break;
			}
			cout << "Mhh je te sent l'âme d'un : " << player->getName() << endl;
		}
	}
	system("pause");
	cout << "Ton premier cours arrive" << endl;
	system("pause");

	while (tourEnnemy < 5) {//je fais une seule boucle de jeu 
		system("CLS");
		compTour = 0;
		while (compTour != 3) {
			system("CLS");
			switch (tourEnnemy) {
			case 0:
				showProf(tab,1,53);//j'affiche les profs en fonction de leurs empalcement dans le fichier texte 
				ennemy = &e2;
				break;
			case 1:
				showProf(tab,54,108);
				ennemy = &e1;
				break;
			case 2:
				showProf(tab,109,160);
				ennemy = &e3;
				break;
			case 3:
				showProf(tab,163,210);
				ennemy = &e4;
				break;
			case 4:
				showProf(tab, 215, 254);
				ennemy = &e5;
				break;
			}
			cout << ennemy->getTab(5+compTour) << endl;
			cout << "1 " << ennemy->getTab(8 + compTour * 3) << " ?" << endl;
			cout << "2 " << ennemy->getTab(9 + compTour * 3) << " ?" << endl;
			cout << "3 " << ennemy->getTab(10 + compTour * 3) << " ?" << endl;
			cout << "entrez votre réponse" << endl;
			cin >> rep;
			if (rep-1 == ennemy->getRep(0)) {
				cout << "yes bonne rep (ta santé mental s'améliore)" << endl;
				player->setMental(player->getMental() + 10);
				compTour += 1;
			}
			if (rep-1 == ennemy->getRep(1)) {
				ennemy->startFight(*ennemy, *player);
				compTour = 3;
			}
			if (rep-1 == ennemy->getRep(2)) {
				cout << "Quel con ! (ta santé mental diminue)" << endl;
				player->setFlemme(player->getFlemme() + 10);
				compTour += 1;
			}
			else {
				cout << "Mauvaise Action";
			}
			system("PAUSE");
		}
		cout << "fin du cours. Cours suivant ";
		system("PAUSE");
		tourEnnemy += 1;
	}
	cout << "Tu viens en fin de terminer ta journée de cours et tu as récupérer : " << endl; 
	for (int i = 0; i < player->getLTab();i++) {
		cout << "- " << player->getTab(i) << endl;
		}
}
