#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <algorithm> 
#include <vector>       // std::vector

using namespace std;

#include "Joueur.h"
#include "Plateau.h"
#include "Case.h"
#include "Achetable.h"
#include "Prison.h"
#include "Chance.h"
#include "Depart.h"
#include "Constructible.h"
#include "Gares.h"

//constructeur
Plateau::Plateau(){
  this->plateau_de_jeu.clear();
};

void Plateau::initPlateau(){
  
  vector<Case *> vec_cases;

  vec_cases.push_back(new Depart());
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000,"Rue Foch"));
  vec_cases.push_back(new Constructible(20000, "Rue de la liberté"));
  vec_cases.push_back(new Gares(20000,"Gare de Nantes"));
  vec_cases.push_back(new Constructible(20000,"Allée du saucisson"));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000, "Ora ora street"));
  vec_cases.push_back(new Constructible(20000, "Bankai avenue"));
  vec_cases.push_back(new Prison());
  vec_cases.push_back(new Constructible(20000,"Hameau Marie Curie"));
  vec_cases.push_back(new Gares(20000,"Gare de Larry la Chance"));
  vec_cases.push_back(new Constructible(20000,"Place de Centrale"));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000,"Place du king kong"));
  vec_cases.push_back(new Constructible(20000, "Avenue de Paris"));
  vec_cases.push_back(new Constructible(20000, "Rue des pendus"));
  vec_cases.push_back(new Constructible(20000, "Rue du caprice d'ines"));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000,"Impasse des Partous"));
  vec_cases.push_back(new Constructible(20000, "Place de la KOUIZINE"));
  vec_cases.push_back(new Constructible(20000, "Maison de mezuzah"));
  vec_cases.push_back(new Gares(20000, "Gare age a velos"));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000,"Immeuble de la soirée zéro"));
  vec_cases.push_back(new Constructible(20000, "Avenue en construction"));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000,"Avenue Jeanne Oscoure"));
  vec_cases.push_back(new Prison());
  vec_cases.push_back(new Constructible(20000,"Impasse passable"));
  vec_cases.push_back(new Constructible(20000, "Immeuble de Sam"));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Constructible(20000,"Hameau de la torture"));
  vec_cases.push_back(new Gares(20000,"Gare de Brest"));
  vec_cases.push_back(new Chance());
  vec_cases.push_back(new Prison());
  vec_cases.push_back(new Constructible(20000,"Route bonne ou mauvaise situations"));
  vec_cases.push_back(new Constructible(20000,"Rue de Napoleon"));
  vec_cases.push_back(new Constructible(20000,"Appartement Bonaparte"));

  //On a besoin de resize afin d'ajuster la place mémoire du vector à la taille du plateau de jeu 
  this->plateau_de_jeu.resize(vec_cases.size());

  copy(vec_cases.begin(),vec_cases.end(),this->plateau_de_jeu.begin());

};

void Plateau::affichage_plateau() const{
  cout << "Différentes cases du terrain : " << endl;
  for(Case* c : this->plateau_de_jeu)
  {
    cout << *c << endl;
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

vector<Case *> Plateau::get_plateau_de_jeu() const{
  return this->plateau_de_jeu;
};

void Plateau::supprimer_proprietees(Joueur* j){
  for(Case *c : this->plateau_de_jeu){
    if(c->get_proprietaire()->get_id() == j->get_id()){
      cout << j->get_nom() << " n'est plus propriétaire de : " << c->get_nom() << endl;
      //Si le terrain est constructible il faut raser les maisons et les immeubles
      if(Constructible* cons = dynamic_cast<Constructible*>(c)) {
          cons->supprimer_logements();
      }
      //Le joueur n'est plus proprietaire de la case
      c->set_proprietaire(nullptr);
    }
  }
}