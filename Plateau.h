#ifndef Plateau_h 
#define Plateau_h 

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <algorithm> 
#include <vector>       // std::vector
#include <map>    // std::vector

using namespace std;

class Plateau{ 

protected:

    multimap<int,int> plateau_de_jeu;
    vector<int> joueurs;

public:

    void affichage_plateau() const;

    void initPlateau(); 

    int nbGares() const;  

    Plateau(int partie);
};

#endif