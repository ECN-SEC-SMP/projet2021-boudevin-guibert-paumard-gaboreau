//!@file Constructible.h
//!@brief Classe Constructible, classe fille de la class achetable
//!@author Dimitri

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

        int get_nb_maison() const;
        int get_nb_hotel() const;
        //! @brief Cette méthode permet d'ajouter un logement (4 maisons et 1 hotel au maximum)
        //! @param void
        //! @return retourne vrai si un logement à pu être ajouté, 0 sinon
        bool add_logements(void);
        //! @brief Cette méthode permet de supprimer un logement de la case
        //! @param void
        //! @return retourne vrai si un logement à été supprimé, retourne faux sinon
        void supprimer_logements(void);

        Constructible(int price,string nom_const);
        //! @brief Cette méthode permet d'acheter une case constructible si jamais cette case n'a pas de propriétaire
        //! @param joueur pointeur vers un objet joueur
        //! @return void
        virtual void acheter(Joueur *cible) override;
        //! @brief Dans le cas où le joueur tombe sur une case sans propriétaire, ce dernier tente de l'acheter, si jamais le joueur tombe sur une case dont il est le propriétaire, il tente de rajouter une maison, enfin, si il tombe sur la propriété d'un autre joueur, il paye le loyer à ce dernier
        //! @param joueur pointeur vers un objet joueur
        //! @return void
        virtual void action(Joueur *cible) override;
        virtual int get_loyer() const override;
        
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
            vs += this->get_proprietaire()->get_nom() +" ";

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