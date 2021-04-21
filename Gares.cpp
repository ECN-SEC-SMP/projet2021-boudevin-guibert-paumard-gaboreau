#include "Achetable.h"
#include "Gares.h"
#include <iostream>     // std::cout
#include <algorithm>    // std::replace
#include <vector>       // std::vector
#include <iterator>

ostream& operator<<(ostream& s,Gares const& gare){

    // création du vecteur
    string vs;
    
    // on ajoute le nom de la case
    vs += gare.get_nom();

    //on ajoute le coût
    vs += ("(coût : "+ to_string( gare.get_prix())+")");
    
    // test si pas de propriétaire
    if(gare.get_proprietaire() == nullptr){

    vs += "- sans propriétaire";

    }
    // si il y a un propriétaire
    else{
    
    vs += "propriétaire :";
    vs += gare.get_proprietaire()->nom;


    //affichage loyer
    vs += "loyer =";
    vs += to_string(gare.get_loyer());
    }

    s <<  vs;

    return s;
}

int Gares::get_id_gare() const //renvoie ne numéro d'identifiant de la gare
{
    return this->id_gare;
}
//todo : modifier pour qu'action ne serve qu'à payer le loyer et acheter des maisons/hotels
void Gares::action(Joueur *cible) 
{
    if(proprietaire == nullptr) //si la case n'a pas de propriétaire
    {
        if(cible ->get_fortune() >= this->prix) // si le joueur à assez de sous
        {
            this -> proprietaire = cible;
        }
    }
    else if(proprietaire != nullptr)
    {
        cible ->add_fortune(-1*(this->get_loyer()));
        this ->proprietaire ->add_fortune(get_loyer());
    }
}

Gares::Gares(int idgare, int prix_gare, string nom_const)
{
    this->id_gare = idgare;
    this->prix = prix_gare;
    this->nom = nom_const;
}

int Gares::get_loyer() const //retourne le loyer que doit payer un joueur en fonction du nombre de gare possédé
{
    return((this->proprietaire->get_nb_gares())*(this->loyer));
}

Joueur *Gares::get_proprietaire() const
{
    return this->proprietaire;
}

int Gares::get_prix() const
{
    return this->prix;
}

void Gares::acheter(Joueur *cible) 
{
    cible ->add_fortune(-1*(this ->get_prix()));
    this-> proprietaire = cible;
}


bool Gares::is_available() const //renvoie 1 si il y a un proprio, 0 sinon
{
    if(this ->get_proprietaire() == nullptr)
    return 0;
    else
    return 1;
}
