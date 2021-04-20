#include <iostream>
using namespace std;
#include "Depart.h"
#include "Joueur.h"

Depart::Depart (){};
void Depart::afficher_case() {
cout << "CASE DEPART" << endl;

};
int Depart::get_loyer(){return (0);};
Joueur* Depart::get_proprietaire() { return(nullptr);};

void Depart::action(Joueur *j){

// le joueur tombe sur la case Chance il récupère 15000€
j->add_fortune(15000);

};