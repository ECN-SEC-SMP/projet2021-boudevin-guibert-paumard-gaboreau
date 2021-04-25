//! @file gare.h
//! @brief classe garre, classe fille de la classe "constructible" elle même, classe fille de la classe "case"
//! @author Dimitri
//!

#ifndef GARES_H
#define GARES_H

#include "Case.h"
#include "Achetable.h"
#include "Joueur.h"

class Gares : public Achetable
{
    protected:

        int loyer = 2500;

    public: 

        Gares(int prix, string nom_const);

        int get_id_gare() const;

        //! @brief La méthode Action permet de payer le loyer si jamais le joueur tombe sur une case qui possède un propriétaire et qu'il n'est pas ce propriétaire
        //! @param cible pointeur vers un objet joueur
        //! @return void
        virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action
        virtual int get_loyer() const override; // méthode vide
        //! @brief La méthode Acheter permet à un joeur de devenir propriétaire d'une case achetable en ettant débité du prix de la case
        //! @param cible pointeur vers un objet joueur
        //! @return void
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