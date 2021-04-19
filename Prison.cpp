#include <iostream>
using namespace std;
#include "Prison.h"
#include "Joueur.h"

Prison::Prison (){};
void afficher_case() {};
int get_loyer(){return (0);};
Joueur* get_proprietaire() { return(nullptr);};

void Prison::action(Joueur *j){

  // le joueur passe en prison
  j.set_injail();

};

