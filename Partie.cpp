#include "Partie.h"
#include <string>
#include <iostream>
using namespace std;

Partie(); // constructeur



        Joueur* get_joueur_actuel(); //renvoie le joueur actuel
        void tour_de_jeu(); // joue le tour

        Case* avance(); //avance de n nombre de case
        int lancer_de_des(); //retourne un entier aléatoire de 1 à 6;
        void action(); //action en cours-
        bool finDePartie(); //renvoie "vrai" lorsqu'il ne reste plus qu'un joueur n'aillant pas fait fallite
        void ajouter_joueurs(Joueur *j); //ajout de joueur