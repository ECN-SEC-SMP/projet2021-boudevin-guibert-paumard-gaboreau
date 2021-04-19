#include <iostream>
using namespace std;
#include "Prison.h"
#include "Joueur.h"

Prison::Prison (){};
void afficher_case() {
cout << "CASE PRISON" << endl;
};
int get_loyer(){return (0);};
Joueur* get_proprietaire() { return(nullptr);};

void Prison::action(Joueur *j){

  // le joueur passe en prison (prison = 1)
  j->set_jail();

};

