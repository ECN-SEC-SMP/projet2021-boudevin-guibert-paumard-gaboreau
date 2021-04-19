#include <iostream>
using namespace std;
#include "Prison.h"
#include "Joueur.h"

Prison::Prison (){};
void afficher_case() {};
int get_loyer(){return (0);};

void Prison::action(Joueur *j){

  // le joueur passe en prison (prison = 1)
  j->set_jail();

};