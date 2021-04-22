#ifndef CONSTRUCTIBLE_H
#define CONSTRUCTIBLE_H

#include "Achetable.h"
#include "Joueur.h"

class Constructible : public Achetable
{

    protected:

        int nb_maison;
        int nb_hotel;
        int loyer = 500;

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

        std::ostream & do_print(std::ostream & c) const override{

            // création du vecteur
            // on ajoute le nom de la case
            string vs ;
            
            vs += this->get_nom();

            //on ajoute le coût
            vs += "(coût : "+ to_string( this->get_prix())+")";
            
            // test si pas de propriétaire
            if(this->get_proprietaire() == nullptr){

            vs += " - sans propriétaire";

            }
            // si il y a un propriétaire
            else{
            
            vs += " propriétaire :";
            vs += this->get_proprietaire()->nom;

            // si le terrain comporte une ou des maisons
            if(this->get_nb_maison() != 0){
            vs += to_string(this->get_nb_maison());
                // si une seule maison
                if(this->get_nb_maison() == 1){ vs += " maison,"; }
                // si plusieurs maisons
                else{vs += " maisons,";}
            }

                // si le terrain comporte un ou des hotels
            if(this->get_nb_hotel() != 0){
            vs += to_string(this->get_nb_hotel());
                // si un seul hotel
                if(this->get_nb_hotel() == 1){ vs += " hotel,"; }
                // si plusieurs hotels
                else{vs += " hotels,";}
            }

            //affichage loyer
            vs += " loyer =";
            vs += to_string(this->get_loyer());
            }

            c <<  vs;
            return  c;
        }; 


};

#endif