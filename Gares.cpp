#include <iostream> 
#include <stdio.h>  
using namespace std;

#include "Achetable.h"
#include "Joueur.h"
#include "Gares.h"

Gares::Gares(int prix_gare, string nom_const)
{
    this->prix = prix_gare;
    this->nom = nom_const;
    this->proprietaire = nullptr;
}

void Gares::acheter(Joueur *cible) 
{
    cible->add_fortune(-this->get_prix());
    this-> proprietaire = cible;
    cout << cible->nom << "a acheté" << this->nom<<endl;
}

//todo : modifier pour qu'action ne serve qu'à payer le loyer et acheter des maisons/hotels
void Gares::action(Joueur *cible) 
{
    if(this->proprietaire != nullptr)
    {
        cible->paiement(this->get_loyer(),this->proprietaire);
        cout<<cible->nom <<"paye "<< this->get_loyer() << " de loyer à "<<this ->proprietaire->nom<<endl;
    }
    else
        cout << "Rien ne se passe" <<endl;
}

bool Gares::is_available() const //renvoie 1 si il y a un proprio, 0 sinon
{
    return this->get_proprietaire() == nullptr;
}

int Gares::get_loyer() const //retourne le loyer que doit payer un joueur en fonction du nombre de gare possédé
{
    return((this->proprietaire->get_nb_gares())*(this->loyer));
}

string Gares::get_nom() const{
    return this->nom;
};

Joueur *Gares::get_proprietaire() const
{
    return this->proprietaire;
}

int Gares::get_prix() const
{
    return this->prix;
}