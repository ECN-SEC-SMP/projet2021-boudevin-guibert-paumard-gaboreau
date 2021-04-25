#include <iostream>
using namespace std;

#include "Case.h"
#include "Depart.h"
#include "Joueur.h"

Depart::Depart (){
    this->proprietaire = nullptr;
    this->nom = "Case départ";
};

void Depart::action(Joueur *j){
    // le joueur tombe sur la case Chance il récupère 15000€
    j->add_fortune(15000);
};