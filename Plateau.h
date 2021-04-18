#ifndef Plateau_h 
#define Plateau_h 

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <algorithm> 
#include <vector>       // std::vector
#include <map>    // std::vector

using namespace std;

#include "Case.h"
#include "Joueur.h"

class Plateau{ 

protected:

    multimap<int,Case*> plateau_de_jeu;
    vector<Joueur*> joueurs;

public:

    void affichage_plateau() const;

    void initPlateau(); 

    int nbGares() const;  

    Plateau(int partie);
};

#endif