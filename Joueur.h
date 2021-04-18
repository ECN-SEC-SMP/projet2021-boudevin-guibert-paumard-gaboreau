//
//  Joueur.h
//  Monopoly
//
#ifndef Joueur_h
#define Joueur_h

#include <string>
using namespace std;

#include "Case.h"

class Joueur{

    protected:

        int id; //identifiant 1 à 5
        int nb_gares; //nombre de gares possédés par le joueur
        string nom; //nom du joueur
        Case* position; //position du joueur sur le plateau
        int fortune;
        
    public:

        bool paiement(int argent, Joueur *cible);// paiement entre joueurs
        int get_nb_gares(); //récupère le nombre de gares possédés par un joueur
        void add_gare(); //ajouter une gare au joueur
        void affiche_position(); //affiche la position du joueur

};

#endif /* Joueur_h */
