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
		"Quel est le rôle d’un destructeur ?",
		"A quoi sert l'héritage ?",
		"Comment utiliser une fonction Friend ?",


		//Réponses
		"- Une fonction membre qui est appelée automatiquement lorsque l’objet est hors de portée ou est détruite explicitement par un appel à delete",
		"- De tout CASSER",
		"- De broyer du papier",

		"- De permettre à ses enfants un avenir merveilleux (sauf si t’es prof de prog)",
		"- Permet de donner à une classe toutes les caractéristiques d'une ou de plusieurs autres classes",
		"- Le savoir que je laisse à mes élèves, non je rigole je suis juste pour la THUNE",

		"- En demandant en Chandler et Monica",
		"- En demandant à ton voisin de classe",
		"- Accorder l’accès aux membres privés et protégés de votre classe",
	};


	vector<string> Alliot =
	{
		//Alliot

		//Questions
		"Une boucle de jeu c’est: ",
		"L’auteur de l’anatomie de scénario est: ",
		"La notion la plus importante dans un jeu est:",

		
		//Réponses
		"- Objectif, challenge, récompense",
		"- Les câbles qui se sont emmêlés derrière ma Super Nes et mon écran cathodique",
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
		"Définissez moi les 3c: ",
		"Comment tester rapidement un lvl",


		//Réponses
		"- Faire comprendre ses intentions de jeu aux joueurs",
		"- Lancer Atmosphir",
		"- Présenter une suite de nouvelle mécanique",

		"- Control, Camera, Character",
		"- Café, caca, clope ",
		"- Vos profs préférés, Cham, Cruz et Careen (ok c’est avec un K mais tu as compris prend pas la tête)",

		"- Grâce à un blocktober",
		"- En speedrun",
		"- Un max de coke", 
	};

	vector<string> Fayeton =
	{
		//Fayeton

		//Questions
		"La sémantique c’est :",
		"Un bon document GDD pour moi c’est :",
		"Un processeur d’ordinateur sert à :",


		//Réponses
		"- L’étude du sens",
		"- Un nouvelle drogue que je prends avant chaque Game Jam",
		"- Essayer de comprendre Nathan quand il parle",

		"- Un texte justifié",
		"- De la couleur, de l’amour et des images",
		"- Je c pas lir mdr",

		"- Sert à l'échange de données entre composants informatiques",
		"- Cuire un oeuf (no joke j’ai déjà vu ça sur youtube)",
		"- Calculer la puissance graphique d’un NPC corpule v3",
	};

	vector<string> Khafiz =
	{
		//Khafiz

		//Questions
		"C’est quoi ta ref ?",
		"T’es con où t’es con ?",
		"Oh c’est qui qui parle la ?!",


		//Réponses
		"- Je l’ai choppé sur Pinterest de mon artiste préféré",
		"- Ouin ouin je l’ai recopié je suis un bébé ",
		"- Heeeu j’ai pas fais mon boulot (90% du temps)",

		"- Désolé je suis une merde",
		"- 42 ?",
		"- La réponse à la question",

		"- Désolé Salim",
		"- ……",
		"- Salim je te prends en 1vs1, rdv gare du nord" };

	vector<string> Perso =
	{
		//Selection Perso

		//Questions
		"Tu te sens l’âme d’un ?",
		"Si je te dis banane ?",
		"Ton jeu favoris ?",
		"Le cheveaux blanc d’henri 4 est :",
		"Lucas préfère:",


		//Réponses
		"- Programmeur",
		"- Dessinateur",
		"- Je veux vous donner des ordres",
		"- Mdr kes ke j’fou ici",

		"- Tu la mange",
		"- Tu la suce",
		"- Pizza",
		"- Je joues au petit bateau avec",

		"- Fez",
		"- Fez",
		"- Fez",
		"- Fez",

		"- Blanc",
		"- Oups j’en ai partout mon caleçon",
		"- Attends quoi 4 ?",
		"- Lundi matin en Narratologie",

		"- Les rousses",
		"- Le cul",
		"- Les seins",
		"- Ta mère",
	};

public:
	string getCham(int c);
	string getAlliot(int a);
	string getCruz(int r);
	string getFayeton(int f);
	string getKhafiz(int k);
	string getPerso(int p);
};
