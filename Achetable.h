#ifndef ACHETABLE_H
#define ACHETABLE_H

#include <iostream>
#include <stdio.h>
#include <algorithm> 
#include <string>

using namespace std;

#include "Joueur.h"
#include "Case.h"

class Achetable : public Case
{

    protected:

        Joueur *proprietaire;
        int prix;
        int loyer;

    public: 

        virtual void action(Joueur *cible) = 0;
        virtual void afficher_case() = 0;
        virtual int get_loyer() = 0;
        virtual int get_prix() = 0;
        
};

#endif
