#ifndef CONSTRUCTIBLE_H
#define CONSTRUCTIBLE_H

#include "Achetable.h"
#include "Joueur.h"

class Constructible : public Achetable
{

    protected:

        int nb_maison;
        int nb_hotel;
        int loyer;
        int prix = 1500;

    public: 

        int get_nb_maison() const;
        int get_nb_hotel() const;
        bool add_logements(void);
        virtual void action(Joueur *cible) override;
        virtual Joueur* get_proprietaire() override;
        virtual void afficher_case() override;
        virtual int get_loyer() override;
        virtual int get_prix() override;
        Constructible(int price,string nom_const);

        virtual bool is_available();
        virtual void acheter(Joueur *cible);


};

#endif