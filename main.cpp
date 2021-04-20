#include "Achetable.h"
#include "Case.h"
#include "Chance.h"
#include "Constructible.h"
#include "Depart.h"
#include "Gares.h"
#include "Joueur.h"
#include "Partie.h"
#include "Plateau.h"
#include "Prison.h"
#include <time.h>       /* time */ //for random

int main() {
  // generate random seed for Dice
  srand (time(NULL));

    Partie *p = new Partie();

    Joueur *j1 = new Joueur("Louis");
    Joueur *j2 = new Joueur("Valentin");
    Joueur *j3 = new Joueur("Théo");
    Joueur *j4 = new Joueur("Dimitri");
    
    p->ajouter_joueurs(j1);
    p->ajouter_joueurs(j2);
    p->ajouter_joueurs(j3);
    p->ajouter_joueurs(j4);

    p->demarrer_partie();

    exit(0);

}