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
        virtual void acheter(Joueur *cible) = 0;
        virtual int get_loyer() const = 0;
        virtual int get_prix() const = 0;
        virtual string get_nom() const = 0;
        virtual bool is_available() const = 0;
        virtual ostream & do_print(std::ostream& c) const = 0;

};

#endif
