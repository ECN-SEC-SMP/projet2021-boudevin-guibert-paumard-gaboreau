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
  cout << "erre";

    //  Case *c = new Chance();
    //  Prison pr;
    //  Depart d;
    //  Gares g(10,"blaba");
    //  new Constructible (200,"Rue Foch");
     
     
    //  Constructible co(1,"foieifeoi");

    //  cout << *c << endl;
    //  cout << pr << endl;  
    //  cout << d << endl;
    //  cout << g << endl;
    //  cout << co << endl;

    Partie p;

    Joueur j1("Louis");
    Joueur j2("Valentin");
    Joueur j3("Théo");
    Joueur j4 ("Dimitri");
    
    p.ajouter_joueurs(&j1);
    p.ajouter_joueurs(&j2);
    p.ajouter_joueurs(&j3);
    p.ajouter_joueurs(&j4);

    p.demarrer_partie();
   
    exit(0);

}