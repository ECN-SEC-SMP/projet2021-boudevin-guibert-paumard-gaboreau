//
//  Partie.h
//  Monopoly
//

#ifndef Partie_h
#define Partie_h

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <algorithm> 
#include <list>

using namespace std;

#include "Joueur.h"
#include "Plateau.h"

//!@file Partie.h
//!@brief Classe Partie, permet de contrôler le déroulement de la partie de monopoly
//!@author Valentin / Théo
class Partie{

    protected:

        Joueur *joueur_actuel;
        list<Joueur *> list_joueurs;
        Plateau *Plat ;

    public:

        //!@brief Fonction permettant de récupérer le joueur qui doit actuellement jouer son tour au monopoly
        //!@return Joueur* le joueur qui est le joueur actuel de la partie
        Joueur* get_joueur_actuel() const; //renvoie le joueur actuel

        //!@brief Fonction permettant d'ajouter un joueur à la partie de monopoly
        //!@param j cible est un pointeur vers un objet de type joueur
        //!@return vrai si l'ajout s'est correctement déroulé
        bool ajouter_joueurs(Joueur *j); 

        //!@brief Fonction permettant de démarrer et de jouer la partie de monopoly en mode automatique
        void demarrer_partie(); 

        //!@brief Fonction permettant d'afficher l'ensemble des joueurs assignés à la partie
        void afficher_joueurs() const;

        //!@brief Constructeur de la classe Partie
        Partie();

    private:

        //!@brief Fonction permettant de déclencher la méthode action/acheter (en fonction du score du dès et du type de case) de la case sur laquelle se trouve le joueur courant
        //!@param score_des représente le score du dès en entrée (compris entre 1 et 6)
        void lancer_action_case(int score_des);

        //!@brief Fonction permettant de déplacer le joueur actuel sur le plateau
        //!@param avancee le nombre de cases dont le joueur courant va avancer sur le plateau
        void avance_joueur(int avancee);

        //!@brief Fonction permettant de lancer un dès aléatoire à six faces
        //!@return retourne un entier aléatoire de 1 à 6;
        int lancer_de_des();

        //!@brief Fonction permettant de passer au tour de jeu du joueur suivant
        void joueur_suivant();

        //!@brief Joue le tour du joueur courant de manière automatique
        //!@return retourne vrai tant que la partie doit continuer
        bool tour_de_jeu();

};

#endif /* Partie_h */