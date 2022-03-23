#include "Personnage.h"
#include "Branlotin.h"
#include "Godiche.h"
#include "Neurd.h"

int main() {



	SetConsoleOutputCP(1252);    //Activation des accents

	//Construction par defaut
	

	//Construction par defaut + modification des variables
	


	

	//Construction surcharge
	Personnage p3("Le simplet", 50, 30, 15);

	Branlotin b1("Le branlotin", 100, 50, 10);

	Godiche g1("Le godiche", 150, 50, 10);

	Neurd p1("Le neurd", 100, 0, 150);

	cout << b1;

}