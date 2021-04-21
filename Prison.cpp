#include <iostream>
using namespace std;
#include "Prison.h"
#include "Joueur.h"

Prison::Prison(){
  this->proprietaire = nullptr;
  this->nom = "";
};

int Prison::get_loyer() const{return (0);};

Joueur* Prison::get_proprietaire() const { return(nullptr);};

void Prison::action(Joueur *j){
  // le joueur passe en prison (prison = 1)
  j->set_jail();
};

