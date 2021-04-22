#include <string>
#include <iostream>     // std::cout
using namespace std;

#include "Constructible.h"

string Constructible::get_nom() const{
    return this->nom;
};


int Constructible::get_nb_maison() const //retourne le nombre de maison sur la case
{
    return this->nb_maison;
}
int Constructible::get_nb_hotel() const //retourne le nombre d'hôtels sur la case
{
    return this->nb_hotel;
}

/* on achète d'abord les maison, une fois la limite des 4 maison
il achète un hotel, la condition d'achat est que le joeur ai assez d'argent
le prix d'une maison = 0,7*prix de la case
un hôtel =  le prix de la case
return 1 si un logement à été ajouté, 0 sinon
*/
 bool Constructible::add_logements(void) 
 {
     if(nb_maison <4)
     {
        if(this ->proprietaire->get_fortune() >= this->prix)
            this -> proprietaire -> add_fortune(-0.7*(this ->prix));
            nb_maison++;
        return 1;
     }
        
    else if(nb_maison == 4)
     {
        if(nb_hotel <0)
            nb_hotel++;
        return 1;
     }
    
    return 0;
}

void Constructible::action(Joueur *cible) //acheter case, acheter logement, payer loyer
{
    if(this ->proprietaire == nullptr) //si la case n'a pas de propriétaire
    {
        if(cible ->get_fortune() >= this->prix) // si le joueur à assez de sous
        {
            this -> proprietaire = cible;
        }
    }
    else if(proprietaire != nullptr)
    {
        cible -> paiement(this ->get_loyer(),this ->  proprietaire);
    }
}

Joueur *Constructible::get_proprietaire() const //renvoie un pointeur vers le propriétaire, renvoie nullptn si celui ci n'exiset pas
{
    return this->proprietaire;
}

int Constructible::get_loyer() const //le loyer est calculé en fonction du nombre de maisons et du nombre d'hotel sur la case
{
    return((this ->loyer)+(this -> loyer)*this->nb_maison + (this->prix)*nb_hotel)*2;
}

int Constructible::get_prix() const//renvoie le prix de la case
{
    return this->prix;
}


Constructible::Constructible(int price,string nom_const)
{
    this->prix = price;
    this->nom = nom_const;

}

void Constructible::acheter(Joueur *cible) 
{
    cible ->add_fortune(-1*(this ->get_prix()));
    this-> proprietaire = cible;
}


bool Constructible :: is_available() const //renvoie 1 si il y a un proprio, 0 sinon
{
    return this->get_proprietaire() == nullptr;
}
