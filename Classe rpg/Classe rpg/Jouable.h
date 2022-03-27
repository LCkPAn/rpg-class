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

		"Quel est le rôle d’un destructeur ?",
		"- Une fonction membre qui est appelée automatiquement lorsque l’objet est hors de portée ou est détruite explicitement par un appel à delete",
		"- De tout CASSER",
		"- De broyer du papier",

		"A quoi sert l'héritage ?",
		"- De permettre à ses enfants un avenir merveilleux (sauf si t’es prof de prog)",
		"- Permet de donner à une classe toutes les caractéristiques d'une ou de plusieurs autres classes",
		"- Le savoir que je laisse à mes élèves, non je rigole je suis juste pour la THUNE",

		"Comment utiliser une fonction Friend ?",
		"- En demandant en Chandler et Monica",
		"- En demandant à ton voisin de classe",
		"- Accorder l’accès aux membres privés et protégés de votre classe",

		//Selection Perso

		"Tu te sens l’âme d’un ?",
		"- Programmeur",
		"- Dessinateur",
		"- Je veux vous donner des ordres",
		"- Mdr kes ke j’fou ici",

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

		"Le cheveaux blanc d’henri 4 est :",
		"- Blanc",
		"- Oups j’en ai partout mon caleçon",
		"- Attends quoi 4 ?",
		"- Lundi matin en Narratologie",

		"Lucas préfère:",
		"- Les rousses",
		"- Le cul",
		"- Les seins",
		"- Ta mère",

		//Alliot

		"Une boucle de jeu c’est: ",
		"- Objectif, challenge, récompense",
		"- Les câbles qui se sont emmêlés derrière ma Super Nes et mon écran cathodique",
		"- Le new game+",

		"L’auteur de l’anatomie de scénario est: ",
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
		"- Présenter une suite de nouvelle mécanique",

		"Définissez moi les 3c: ",
		"- Control, Camera, Character",
		"- Café, caca, clope ",
		"- Vos profs préférés, Cham, Cruz et Careen (ok c’est avec un K mais tu as compris prend pas la tête)",

		"Comment tester rapidement un lvl",
		"- Grâce à un blocktober",
		"- En speedrun",
		"- Un max de coke",

		//Fayeton

		"La sémantique c’est :",
		"- L’étude du sens",
		"- Un nouvelle drogue que je prends avant chaque Game Jam",
		"- Essayer de comprendre Nathan quand il parle",

		"Un bon document GDD pour moi c’est :",
		"- Un texte justifié",
		"- De la couleur, de l’amour et des images",
		"- Je c pas lir mdr",

		"Un processeur d’ordinateur sert à :",
		"- Sert à l'échange de données entre composants informatiques",
		"- Cuire un oeuf (no joke j’ai déjà vu ça sur youtube)",
		"- Calculer la puissance graphique d’un NPC corpule v3",

		//Khafiz

		"C’est quoi ta ref ?",
		"- Je l’ai choppé sur Pinterest de mon artiste préféré",
		"- Ouin ouin je l’ai recopié je suis un bébé ",
		"- Heeeu j’ai pas fais mon boulot (90% du temps)",

		"T’es con où t’es con ?",
		"- Désolé je suis une merde",
		"- 42 ?",
		"- La réponse à la question",

		"Oh c’est qui qui parle la ?!",
		"- Désolé Salim",
		"- ……",
		"- Salim je te prends en 1vs1, rdv gare du nord"};
public:
	string getTab(int c);
};
