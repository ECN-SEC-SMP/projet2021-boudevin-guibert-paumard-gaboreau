#ifndef CASE_h 
#define CASE_h 

#include <iostream>
#include <stdio.h>

using namespace std;

#include "Joueur.h"

class Case{ 

    friend ostream& operator<<(std::ostream &os, Case const& o) {
        return o.do_print(os);
    }

    protected:
    
        string nom;
        Joueur* proprietaire;

    public:

        virtual void action(Joueur *cible) = 0;
        virtual int get_loyer() const = 0;
        virtual Joueur* get_proprietaire() const = 0;
        virtual ostream & do_print(std::ostream& c) const = 0;

};

#endif