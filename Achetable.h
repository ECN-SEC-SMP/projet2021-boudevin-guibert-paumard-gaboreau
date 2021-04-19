#ifndef ACHETABLE_H
#define ACHETABLE_H

#include "Joueur.h"
#include "Case.h"

class Achetable : public Case
{

    protected:

        Joueur *proprietaire;
        int prix;

    public: 

        virtual void action(Joueur *cible) = 0;
        virtual void afficher_case() override;
        virtual void get_loyer() override;
        Achetable();
};

#endif
