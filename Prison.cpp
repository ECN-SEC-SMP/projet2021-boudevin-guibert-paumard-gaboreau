#include <iostream>
using namespace std;
#include "Prison.h"
#include "Joueur.h"

Prison::Prison (){};
void Prison::afficher_case() {
cout << "CASE PRISON" << endl;
};
int Prison::get_loyer(){return (0);};
Joueur* Prison::get_proprietaire() { return(nullptr);};

void Prison::action(Joueur *j){

  // le joueur passe en prison (prison = 1)
  j->set_jail();

};

