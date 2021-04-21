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

        Constructible(int price,string nom_const);
        virtual void acheter(Joueur *cible) override;
        virtual void action(Joueur *cible) override;
        virtual Joueur* get_proprietaire() const override;
        virtual int get_loyer() const override;
        virtual int get_prix() const override;
        int get_nb_maison() const;
        int get_nb_hotel() const;
        bool add_logements(void);
        virtual string get_nom() const override;
        virtual bool is_available() const override;
        virtual ostream& operator<<(ostream&s) override;

};

#endif