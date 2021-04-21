#ifndef GARES_H
#define GARES_H

#include "Achetable.h"
#include "Joueur.h"

class Gares : public Achetable
{

    protected:

        int id_gare;
        int prix;
        int loyer = 1000;

    public: 

        Gares(int idgare, int prix, string nom_const);

        int get_id_gare() const;
        virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action
        virtual int get_loyer() const override; // méthode vide
        virtual Joueur* get_proprietaire() const override;
        virtual int get_prix() const override;
        virtual void acheter(Joueur *cible) override;
        virtual string get_nom() const override;
        virtual bool is_available() const override;
        

        std::ostream & do_print(std::ostream & c) const override{
            // création du vecteur
            string vs;
            
            // on ajoute le nom de la case
            vs += this->get_nom();

            //on ajoute le coût
            vs += ("(coût : "+ to_string( this->get_prix())+")");
            
            // test si pas de propriétaire
            if(this->get_proprietaire() == nullptr){

            vs += "- sans propriétaire";

            }
            // si il y a un propriétaire
            else{
            
            vs += "propriétaire :";
            vs += this->get_proprietaire()->nom;


            //affichage loyer
            vs += "loyer =";
            vs += to_string(this->get_loyer());
            }

            c <<  vs;
            return c;
        }; 

};

#endif