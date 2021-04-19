#ifndef CASE_h 
#define CASE_h 

#include <iostream>
#include <stdio.h>

using namespace std;

#include "Joueur.h"

class Case{ 

    protected:

        int id_case;
        string nom;
        Joueur* proprietaire;

    public:

        virtual void action(Joueur *cible) = 0;
        virtual void afficher_case() = 0;
        virtual int get_loyer() = 0;
        virtual Joueur* get_proprietaire() = 0;

};

#endif