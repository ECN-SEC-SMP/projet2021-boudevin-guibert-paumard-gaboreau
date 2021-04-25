//!@file Case.h
//!@brief classe mère de chance et achetable
//!@author Valentin

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
        //! @brief la méthode action à une implémentation différente dans chaque classe fille, c'est une classe virtuelle pure
        //! @param joeur le paramètre cible est un pointeur sur un objet joueur
        //! @return void
        virtual void action(Joueur *cible) = 0;
        virtual ostream & do_print(std::ostream& c) const = 0;

};

#endif