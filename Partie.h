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


class Partie{

    protected:

        Joueur *joueur_actuel;
        list<Joueur *> list_joueurs;
        Plateau *Plat ;

    public:

        Joueur* get_joueur_actuel() const; //renvoie le joueur actuel
        bool ajouter_joueurs(Joueur *j); //retourne vrai si l'ajout s'est correctement déroulé
        void demarrer_partie(); //initialise la partie et la joue en boucle
        void afficher_joueurs() const; //affiche l'ensemble des joueurs de la partie
        Partie();

    private:

        void lancer_action_case(int score_des);
        void avance_joueur(int avancee); //avance de n nombre de case
        int lancer_de_des(); //retourne un entier aléatoire de 1 à 6;
        void action(); //action en cours-
        bool finDePartie(); //renvoie "vrai" lorsqu'il ne reste plus qu'un joueur n'aillant pas fait fallite
        bool tour_de_jeu(); // joue le tour -> retourne true tant que la partie doit continuer
};

#endif /* Partie_h */