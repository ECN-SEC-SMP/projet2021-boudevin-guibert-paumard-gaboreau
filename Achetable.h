//!@file Achetable.h
//!@brief la classe achetable hérite de la classe case, c'est une classe abstraite
//!@author Dimitri

#ifndef Achetable_h
#define Achetable_h

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

#include "Joueur.h"
#include "Case.h"

class Achetable : public Case
{

    protected:

        int prix;
        int loyer;

    public: 

        Achetable(int price,string nom_const);

        int get_prix() const;
        string get_nom() const;
        bool is_available() const;
        //! @brief La méthode Action est définie différement dans les deux classes filles
        //! @param joeur pointeur vers un objet joueur
        //! @return void
        virtual void action(Joueur *cible) = 0;
        //! @brief La méthode Acheter est définie différement dans les deux classes filles
        //! @param joeur pointeur vers un objet joueur
        //! @return void
        virtual void acheter(Joueur *cible) = 0;
        virtual ostream & do_print(std::ostream& c) const = 0;
        virtual int get_loyer() const = 0;

};

#endif
