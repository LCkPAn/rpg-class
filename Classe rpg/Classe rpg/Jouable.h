#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Jouable
{
private:
	vector<string> Cham =
	{
		//Cham

		//Questions
		"Quel est le r�le d�un destructeur ?",
		"A quoi sert l'h�ritage ?",
		"Comment utiliser une fonction Friend ?",


		//R�ponses
		"- Une fonction membre qui est appel�e automatiquement lorsque l�objet est hors de port�e ou est d�truite explicitement par un appel � delete",
		"- De tout CASSER",
		"- De broyer du papier",

		"- De permettre � ses enfants un avenir merveilleux (sauf si t�es prof de prog)",
		"- Permet de donner � une classe toutes les caract�ristiques d'une ou de plusieurs autres classes",
		"- Le savoir que je laisse � mes �l�ves, non je rigole je suis juste pour la THUNE",

		"- En demandant en Chandler et Monica",
		"- En demandant � ton voisin de classe",
		"- Accorder l�acc�s aux membres priv�s et prot�g�s de votre classe",
	};


	vector<string> Alliot =
	{
		//Alliot

		//Questions
		"Une boucle de jeu c�est: ",
		"L�auteur de l�anatomie de sc�nario est: ",
		"La notion la plus importante dans un jeu est:",

		
		//R�ponses
		"- Objectif, challenge, r�compense",
		"- Les c�bles qui se sont emm�l�s derri�re ma Super Nes et mon �cran cathodique",
		"- Le new game+",

		"- John Truby",
		"- Chuck Norris",
		"- Xavier Alliot",

		"- Le fun",
		"- Les boobs",
		"- La narration" 
	};

	vector<string> Cruz =
	{
		//Cruz

		//Questions
		"Pour faire un bon tuto il faut ? ",
		"D�finissez moi les 3c: ",
		"Comment tester rapidement un lvl",


		//R�ponses
		"- Faire comprendre ses intentions de jeu aux joueurs",
		"- Lancer Atmosphir",
		"- Pr�senter une suite de nouvelle m�canique",

		"- Control, Camera, Character",
		"- Caf�, caca, clope ",
		"- Vos profs pr�f�r�s, Cham, Cruz et Careen (ok c�est avec un K mais tu as compris prend pas la t�te)",

		"- Gr�ce � un blocktober",
		"- En speedrun",
		"- Un max de coke", 
	};

	vector<string> Fayeton =
	{
		//Fayeton

		//Questions
		"La s�mantique c�est :",
		"Un bon document GDD pour moi c�est :",
		"Un processeur d�ordinateur sert � :",


		//R�ponses
		"- L��tude du sens",
		"- Un nouvelle drogue que je prends avant chaque Game Jam",
		"- Essayer de comprendre Nathan quand il parle",

		"- Un texte justifi�",
		"- De la couleur, de l�amour et des images",
		"- Je c pas lir mdr",

		"- Sert � l'�change de donn�es entre composants informatiques",
		"- Cuire un oeuf (no joke j�ai d�j� vu �a sur youtube)",
		"- Calculer la puissance graphique d�un NPC corpule v3",
	};

	vector<string> Khafiz =
	{
		//Khafiz

		//Questions
		"C�est quoi ta ref ?",
		"T�es con o� t�es con ?",
		"Oh c�est qui qui parle la ?!",


		//R�ponses
		"- Je l�ai chopp� sur Pinterest de mon artiste pr�f�r�",
		"- Ouin ouin je l�ai recopi� je suis un b�b� ",
		"- Heeeu j�ai pas fais mon boulot (90% du temps)",

		"- D�sol� je suis une merde",
		"- 42 ?",
		"- La r�ponse � la question",

		"- D�sol� Salim",
		"- ��",
		"- Salim je te prends en 1vs1, rdv gare du nord" };

	vector<string> Perso =
	{
		//Selection Perso

		//Questions
		"Tu te sens l��me d�un ?",
		"Si je te dis banane ?",
		"Ton jeu favoris ?",
		"Le cheveaux blanc d�henri 4 est :",
		"Lucas pr�f�re:",


		//R�ponses
		"- Programmeur",
		"- Dessinateur",
		"- Je veux vous donner des ordres",
		"- Mdr kes ke j�fou ici",

		"- Tu la mange",
		"- Tu la suce",
		"- Pizza",
		"- Je joues au petit bateau avec",

		"- Fez",
		"- Fez",
		"- Fez",
		"- Fez",

		"- Blanc",
		"- Oups j�en ai partout mon cale�on",
		"- Attends quoi 4 ?",
		"- Lundi matin en Narratologie",

		"- Les rousses",
		"- Le cul",
		"- Les seins",
		"- Ta m�re",
	};

public:
	string getCham(int c);
	string getAlliot(int a);
	string getCruz(int r);
	string getFayeton(int f);
	string getKhafiz(int k);
	string getPerso(int p);
};
