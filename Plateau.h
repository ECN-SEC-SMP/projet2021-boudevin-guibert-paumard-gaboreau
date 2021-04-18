#ifndef Plateau_h 
#define Plateau_h 

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <algorithm> 
#include <list>
#include <map>    // std::vector

using namespace std;

#include "Case.h"
#include "Joueur.h"

class Plateau{ 

protected:

    multimap<Case*,list<Joueur*>*> plateau_de_jeu;

public:


    void affichage_plateau() const;

    void initPlateau(); 

    int nbGares() const;  

    Plateau();

};

#endif