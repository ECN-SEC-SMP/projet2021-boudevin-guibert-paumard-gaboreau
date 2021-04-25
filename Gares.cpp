#include <iostream> 
#include <stdio.h>  
using namespace std;

#include "Case.h"
#include "Achetable.h"
#include "Joueur.h"
#include "Gares.h"

Gares::Gares(int prix_gare, string nom_const):Achetable(prix_gare,nom_const){}

void Gares::acheter(Joueur *cible) 
{
    cible->add_fortune(-this->get_prix());
    this-> proprietaire = cible;
    cout << cible->get_nom() << "a acheté" << this->get_nom() <<endl;
}

//todo : modifier pour qu'action ne serve qu'à payer le loyer et acheter des maisons/hotels
void Gares::action(Joueur *cible) 
{
    if(this->proprietaire != nullptr)
    {
        cible->paiement(this->get_loyer(),this->proprietaire);
        cout << cible->get_nom()<<" a payé " << this->get_loyer()<< " à "<<this->proprietaire->get_nom() << "(fortune de " << this->proprietaire->get_nom() << " : " << this->proprietaire->get_fortune() << ")" << endl;
    }
    else
        cout << "Rien ne se passe" <<endl;
}

int Gares::get_loyer() const //retourne le loyer que doit payer un joueur en fonction du nombre de gare possédé
{
    return((this->proprietaire->get_nb_gares())*(this->loyer));
}