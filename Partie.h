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
#include "Case.h"

class Partie{

    private: 
        int nb_joueurs;

    protected:
        Joueur *joueur_actuel;
        list<Joueur *> list_joueurs;

    public:
        Joueur* get_joueur_actuel(); //renvoie le joueur actuel
        void tour_de_jeu(); // joue le tour
        
    private:
        Case* avance(); //avance de n nombre de case
        int lancer_de_des(); //retourne un entier aléatoire de 1 à 6;
        void action(); //action en cours-
        bool finDePartie(); //renvoie "vrai" lorsqu'il ne reste plus qu'un joueur n'aillant pas fait fallite
        Partie();
        void ajouter_joueurs(Joueur *j);

};

#endif /* Partie_h */