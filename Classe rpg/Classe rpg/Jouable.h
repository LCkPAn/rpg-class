#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Jouable
{
private:
	vector<string> tab =
	{
		//Cham

		"Quel est le r�le d�un destructeur ?",
		"- Une fonction membre qui est appel�e automatiquement lorsque l�objet est hors de port�e ou est d�truite explicitement par un appel � delete",
		"- De tout CASSER",
		"- De broyer du papier",

		"A quoi sert l'h�ritage ?",
		"- De permettre � ses enfants un avenir merveilleux (sauf si t�es prof de prog)",
		"- Permet de donner � une classe toutes les caract�ristiques d'une ou de plusieurs autres classes",
		"- Le savoir que je laisse � mes �l�ves, non je rigole je suis juste pour la THUNE",

		"Comment utiliser une fonction Friend ?",
		"- En demandant en Chandler et Monica",
		"- En demandant � ton voisin de classe",
		"- Accorder l�acc�s aux membres priv�s et prot�g�s de votre classe",

		//Selection Perso

		"Tu te sens l��me d�un ?",
		"- Programmeur",
		"- Dessinateur",
		"- Je veux vous donner des ordres",
		"- Mdr kes ke j�fou ici",

		"Si je te dis banane ?",
		"- Tu la mange",
		"- Tu la suce",
		"- Pizza",
		"- Je joues au petit bateau avec",

		"Ton jeu favoris ?",
		"- Fez",
		"- Fez",
		"- Fez",
		"- Fez",

		"Le cheveaux blanc d�henri 4 est :",
		"- Blanc",
		"- Oups j�en ai partout mon cale�on",
		"- Attends quoi 4 ?",
		"- Lundi matin en Narratologie",

		"Lucas pr�f�re:",
		"- Les rousses",
		"- Le cul",
		"- Les seins",
		"- Ta m�re",

		//Alliot

		"Une boucle de jeu c�est: ",
		"- Objectif, challenge, r�compense",
		"- Les c�bles qui se sont emm�l�s derri�re ma Super Nes et mon �cran cathodique",
		"- Le new game+",

		"L�auteur de l�anatomie de sc�nario est: ",
		"- John Truby",
		"- Chuck Norris",
		"- Xavier Alliot",

		"La notion la plus importante dans un jeu est:",
		"- Le fun",
		"- Les boobs",
		"- La narration"

		//Zurc

		"Pour faire un bon tuto il faut ? ",
		"- Faire comprendre ses intentions de jeu aux joueurs",
		"- Lancer Atmosphir",
		"- Pr�senter une suite de nouvelle m�canique",

		"D�finissez moi les 3c: ",
		"- Control, Camera, Character",
		"- Caf�, caca, clope ",
		"- Vos profs pr�f�r�s, Cham, Cruz et Careen (ok c�est avec un K mais tu as compris prend pas la t�te)",

		"Comment tester rapidement un lvl",
		"- Gr�ce � un blocktober",
		"- En speedrun",
		"- Un max de coke",

		//Fayeton

		"La s�mantique c�est :",
		"- L��tude du sens",
		"- Un nouvelle drogue que je prends avant chaque Game Jam",
		"- Essayer de comprendre Nathan quand il parle",

		"Un bon document GDD pour moi c�est :",
		"- Un texte justifi�",
		"- De la couleur, de l�amour et des images",
		"- Je c pas lir mdr",

		"Un processeur d�ordinateur sert � :",
		"- Sert � l'�change de donn�es entre composants informatiques",
		"- Cuire un oeuf (no joke j�ai d�j� vu �a sur youtube)",
		"- Calculer la puissance graphique d�un NPC corpule v3",

		//Khafiz

		"C�est quoi ta ref ?",
		"- Je l�ai chopp� sur Pinterest de mon artiste pr�f�r�",
		"- Ouin ouin je l�ai recopi� je suis un b�b� ",
		"- Heeeu j�ai pas fais mon boulot (90% du temps)",

		"T�es con o� t�es con ?",
		"- D�sol� je suis une merde",
		"- 42 ?",
		"- La r�ponse � la question",

		"Oh c�est qui qui parle la ?!",
		"- D�sol� Salim",
		"- ��",
		"- Salim je te prends en 1vs1, rdv gare du nord"};
public:
	string getTab(int c);
};
