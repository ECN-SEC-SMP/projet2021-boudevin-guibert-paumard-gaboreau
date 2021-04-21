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
 
    Chance c;
    Prison p;
    Depart d;
    Gares g(1,10,"blaba");
    Constructible co(1,"foieifeoi");

    cout << c << endl;
    cout << p << endl;  
    cout << d << endl;
    cout << g << endl;
    cout << co << endl;

    exit(0);

}