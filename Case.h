#ifndef Case_h 
#define Case_h 

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

        Joueur* get_proprietaire() const;
        string get_nom() const;
        void set_proprietaire(Joueur *j);

        virtual void action(Joueur *cible) = 0;
        virtual ostream & do_print(std::ostream& c) const = 0;

};

#endif