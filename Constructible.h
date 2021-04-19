#ifndef CONSTRUCTIBLE_H
#define CONSTRUCTIBLE_H

#include "Achetable.h"
#include "Joueur.h"

class Constructible : public Achetable
{

    protected:

        int nb_maison;
        int nb_hotel;
        int prix_const; 
        int loyer;

    public: 

        int get_nb_maison() const;
        int get_nb_hotel() const;
        bool add_logements(void);
        virtual void action(Joueur *cible) override;
        virtual Joueur* get_proprietaire() override;
        virtual void afficher_case() override;
        virtual int get_loyer() override;
        Constructible(int price);
};

#endif