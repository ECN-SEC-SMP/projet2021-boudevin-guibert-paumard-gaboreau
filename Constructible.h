#ifndef CONSTRUCTIBLE_H
#define CONSTRUCTIBLE_H

#include "Achetable.h"

class Constructible : public Achetable
{

    protected:

        int nb_maison;
        int nb_botel;

    public: 

        int get_nb_maison();
        int get_nb_hotel();
        void add_logements(int nb_achats);
        virtual void acheter() override;

};

#endif