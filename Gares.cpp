#include "Achetable.h"
#include "Gares.h"

int Gares::get_id_gare() const
{
    return id_gare;
}

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

Gares::Gares(int idgare, int prix_gare, string nom_gare)
{
    this->id_gare = idgare;
    this->prix = prix_gare;
}

void Gares::afficher_case()
{
    if(this->proprietaire == nullptr)
        cout<<"cette case ne possède pas de proprio";
    else 
        cout<<"le propiétaire de cette case est à " <<this->proprietaire->get_id()<<endl;
}
int Gares::get_loyer() //retourne le loyer que doit payer un joueur en fonction du nombre de gare possédé
{
    return((this->proprietaire->get_nb_gares())*2500);
}

Joueur *Gares::get_proprietaire()
{
    return this->proprietaire;
}

int Gares::get_prix()
{
    return prix_const;
}