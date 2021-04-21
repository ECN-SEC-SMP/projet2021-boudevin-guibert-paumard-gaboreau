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
        virtual ostream& operator<<(ostream&s) = 0;
        virtual int get_loyer() const = 0;
        virtual Joueur* get_proprietaire() const = 0;

};

#endif