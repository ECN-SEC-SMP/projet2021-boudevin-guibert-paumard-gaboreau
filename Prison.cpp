#include <iostream>
using namespace std;

#include "Prison.h"
#include "Joueur.h"

Prison::Prison(){
  this->proprietaire = nullptr;
  this->nom = "Case Prison";
};

void Prison::action(Joueur *j){
  // le joueur passe en prison (prison = 1)
  j->set_jail();
};
