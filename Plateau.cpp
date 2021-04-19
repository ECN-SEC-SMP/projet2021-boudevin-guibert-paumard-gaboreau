#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <algorithm> 
#include <vector>       // std::vector
#include <iterator>

using namespace std;

#include "Case.h"
#include "Achetable.h"
#include "Gares.h"
#include "Prison.h"
#include "Chance.h"
#include "Constructible.h"
#include "Depart.h"
#include "Plateau.h"

void Plateau::affichage_plateau() const{
  for(Case* c : this->plateau_de_jeu)
  {
    c->afficher_case();
  }
};

int Plateau::nbGares(Joueur* j) const{
  int nb_gares = 0;

  for(Case* c : this->plateau_de_jeu)
  {
    if(c->get_proprietaire() != nullptr && c->get_proprietaire()->get_id() == j->get_id()){
      nb_gares++;
    }
  }

  return nb_gares;

};

void Plateau::initPlateau(){
  
  vector<Case *> vec_cases;

  vec_cases.push_back(new Depart());
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(10));
  vec_cases.push_back(new Gares(1,20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Prison());
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Gares(2,20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Gares(3,20000));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Prison());
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Gares(4,20000));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Prison());
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(20000));
  vec_cases.push_back(new Constructible(20000));

  copy(vec_cases.begin(),vec_cases.end(),this->plateau_de_jeu.begin());
};

vector<Case *> Plateau::get_plateau_de_jeu(){
  return this->plateau_de_jeu;
}

//constructeur
Plateau::Plateau(){
  initPlateau();
};