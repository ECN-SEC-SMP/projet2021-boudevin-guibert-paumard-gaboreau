//
//  Partie.h
//  Monopoly
//


#ifndef Partie_h
#define Partie_h

#include <string>
using namespace std;

#include "Joueur.h"
#include "Case.h"

class Partie{

    protected:
        Joueur *joueur_actuel;

    public:
        Joueur* get_joueur_actuel(); //renvoie le joueur actuel
        void tour_de_jeu(); // joue le tour
        
    private:
        Case* avance(); //avance de n nombre de case
        int lancer_de_des(); //retourne un entier aléatoire de 1 à 6;
        void action(); //action en cours-
        bool finDePartie(); //renvoie "vrai" lorsqu'il ne reste plus qu'un joueur n'aillant pas fait fallite
        Partie(Joueur joueur_1);
};

#endif /* Partie_h */