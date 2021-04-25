#ifndef GARES_H
#define GARES_H

#include "Case.h"
#include "Achetable.h"
#include "Joueur.h"

class Gares : public Achetable
{
    protected:

        int loyer = 1000;

    public: 

        Gares(int prix, string nom_const);

        int get_id_gare() const;
        virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action
        virtual int get_loyer() const override; // méthode vide
        virtual void acheter(Joueur *cible) override;
        
        std::ostream & do_print(std::ostream & c) const override{
            // création du vecteur
            string vs;
            
            // on ajoute le nom de la case
            vs += this->get_nom();

            //on ajoute le coût
            vs += ("(coût : "+ to_string( this->get_prix())+")");
            
            // test si pas de propriétaire
            if(this->get_proprietaire() == nullptr){

            vs += " - sans propriétaire";

            }
            // si il y a un propriétaire
            else{
            
            vs += " propriétaire :";
            vs += this->get_proprietaire()->get_nom();


            //affichage loyer
            vs += " loyer =";
            vs += to_string(this->get_loyer());
            }

            c <<  vs;
            return c;
        }; 

};

#endif