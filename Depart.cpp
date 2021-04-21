#include <iostream>
using namespace std;
#include "Depart.h"
#include "Joueur.h"

Depart::Depart (){
    this->proprietaire = nullptr;
};

int Depart::get_loyer()const {return (0);};
Joueur* Depart::get_proprietaire() const{ return(nullptr);};

void Depart::action(Joueur *j){
    // le joueur tombe sur la case Chance il récupère 15000€
    j->add_fortune(15000);
};