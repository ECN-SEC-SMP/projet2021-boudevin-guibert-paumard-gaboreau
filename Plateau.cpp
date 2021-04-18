#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <algorithm> 
#include <vector>       // std::vector
#include <map>    // std::vector
#include <iterator>

using namespace std;

#include "Case.h"
#include "Achetable.h"
#include "Event.h"
#include "Gares.h"
#include "Prison.h"
#include "Chance.h"
#include "Constructible.h"
#include "Depart.h"
#include "Joueur.h"
#include "Plateau.h"

void Plateau::affichage_plateau() const{
  int a;
  a = a + 1;
};

void Plateau::initPlateau(){
  int a;
  a = a + 1;
};

int Plateau::nbGares() const{
  return 4;
};

//constructeur
Plateau::Plateau(){

  multimap<Case*,list<Joueur*>*> plateau;

  plateau.insert(pair<Case*,list<Joueur*>*>(new Depart(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Chance(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Gares(1),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Chance(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Prison(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Chance(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Gares(2),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Chance(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Chance(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Gares(3),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Chance(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Prison(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Chance(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Gares(4),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Chance(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));
  plateau.insert(pair<Case*,list<Joueur*>*>(new Constructible(),new list<Joueur*>()));

  this->plateau_de_jeu(plateau.begin(), plateau.end());


};