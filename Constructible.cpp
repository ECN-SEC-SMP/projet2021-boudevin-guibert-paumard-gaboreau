#include <string>
#include <iostream>     // std::cout
using namespace std;

#include "Achetable.h"
#include "Constructible.h"
#include "Joueur.h"

Constructible::Constructible(int price,string nom_const):Achetable(price,nom_const){
    this->nb_hotel = 0;
    this->nb_maison = 0;
}

void Constructible::acheter(Joueur *cible) //fonction permettant à un joueur de devenir propriétaire d'une case
{
    cible ->add_fortune(-this->get_prix());
    this->proprietaire = cible;
    cout<< cible->get_nom() <<" est devenu proprio de la case " << this->get_nom()<<endl;
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
// si la cible tombe sur une 
void Constructible::action(Joueur *cible) //acheter case, acheter logement, payer loyer
{
    if(!this->is_available())// si la case à un proprio
    {
        if(this->get_proprietaire() == cible) //si 
        {
            if(this->add_logements())
                cout <<"un logement à été ajouter à la case " <<this->get_nom()<<endl;
            else
                cout <<"le nombre de logement max a été atteint sur la case" << this -> get_nom();
        }
        else if(this->get_proprietaire() != cible)
        {
            cible->paiement(this->get_loyer(),this->proprietaire);
            cout << cible->get_nom()<<" a payé " << this->get_loyer()<< " à "<<this->proprietaire->get_nom() << "(fortune de " << this->proprietaire->get_nom() << " : " << this->proprietaire->get_fortune() << ")" << endl;
        } 
    }
    else
        cout <<"Rien ne se passe"<<endl;
}



void Constructible::supprimer_logements(){
    this->nb_hotel = 0;
    this->nb_maison = 0;
}

int Constructible::get_nb_maison() const //retourne le nombre de maison sur la case
{
    return this->nb_maison;
}
int Constructible::get_nb_hotel() const //retourne le nombre d'hôtels sur la case
{
    return this->nb_hotel;
}

int Constructible::get_loyer() const //le loyer est calculé en fonction du nombre de maisons et du nombre d'hotel sur la case
{
    return ( this->loyer+ this->loyer*this->nb_maison + this->prix*nb_hotel )*2;
}