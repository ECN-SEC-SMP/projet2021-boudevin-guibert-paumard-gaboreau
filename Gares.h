#ifndef GARES_H
#define GARES_H

#include "Achetable.h"
#include "Joueur.h"

class Gares : public Achetable
{

    protected:

        int id_gare;
        int prix_const;

    public: 

        Gares(int idgare, int prix, string nom_const);
        int get_id_gare() const;
        virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action
        virtual int get_loyer() const override; // méthode vide
        virtual Joueur* get_proprietaire() const override;
        virtual int get_prix() const override;
        virtual ostream& operator<<(ostream&s) override;
        virtual void acheter(Joueur *cible) override;
        virtual string get_nom() const override;
        virtual bool is_available() const override;
        
};

#endif