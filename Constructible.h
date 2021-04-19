#ifndef CONSTRUCTIBLE_H
#define CONSTRUCTIBLE_H

#include "Achetable.h"

class Constructible : public Achetable
{

    protected:

        int nb_maison;
        int nb_botel;
        int cout; 

    public: 

        int get_nb_maison() const;
        int get_nb_hotel() const;
        void add_logements(int nb_achats);
        virtual void action(Joueur *cible) override;
        Constructible(int cout);
};

#endif