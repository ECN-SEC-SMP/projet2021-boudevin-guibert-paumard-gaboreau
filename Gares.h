#ifndef GARES_H
#define GARES_H

#include "Achetable.h"
#include "Joueur.h"

class Gares : public Achetable
{

    protected:

        int id_gare;

    public: 

        int get_id_gare() const;
        virtual void action(Joueur *cible) override ; 
        Gares(int idgare, int cout);
        virtual void afficher_case() override;
        virtual int get_loyer() override;
        virtual Joueur* get_proprietaire() override;
};

#endif