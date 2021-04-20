#ifndef Plateau_h 
#define Plateau_h 

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <algorithm> 
#include <vector>

using namespace std;

#include "Case.h"
#include "Achetable.h"
#include "Gares.h"
#include "Prison.h"
#include "Chance.h"
#include "Constructible.h"
#include "Depart.h"
#include "Plateau.h"
#include "Joueur.h"

class Plateau{ 

protected:

    vector<Case *> plateau_de_jeu;

public:


    void affichage_plateau() const;

    void initPlateau(); 

    int nbGares(Joueur* j) const;  

    Plateau();

    vector<Case *> get_plateau_de_jeu();
};

#endif