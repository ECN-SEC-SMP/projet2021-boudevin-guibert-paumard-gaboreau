#ifndef GARES_H
#define GARES_H

#include "Achetable.h"

class Gares : public Achetable
{

    protected:

        int id_gare;

    public: 

        int get_id_gare() const;
        virtual void action(Joueur *cible) override ; 
        Gares(int idgare, int cout);
        
};

#endif