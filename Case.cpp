#include "Case.h"

Joueur* Case::get_proprietaire() const{
    return this->proprietaire;
};

void Case::set_proprietaire(Joueur *j){
    this->proprietaire = j;
};

string Case::get_nom() const{
    return this->nom;
}