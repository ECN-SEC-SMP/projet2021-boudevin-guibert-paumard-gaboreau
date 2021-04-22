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

int main() {
 
    // Case *c = new Chance();
    // Prison pr;
    // Depart d;
    // Gares g(1,10,"blaba");
    // Constructible co(1,"foieifeoi");

    // cout << *c << endl;
    // cout << pr << endl;  
    // cout << d << endl;
    // cout << g << endl;
    // cout << co << endl;

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