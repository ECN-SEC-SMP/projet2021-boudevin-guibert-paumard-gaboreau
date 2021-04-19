#include "Achetable.h"
#include "Gares.h"

int Gares::get_id_gare() const
{
    return id_gare;
}

void Gares::action(Joueur *cible)
{

}

Gares::Gares(int idgare, int cout)
{
    this->id_gare = idgare;
    this->prix = cout;
}

void Gares::afficher_case()
{
    if(this->proprietaire == nullptr)
        cout<<"cette case ne possède pas de proprio";
    else 
        cout<<"le propiétaire de cette case est à " <<this->proprietaire->get_id()<<endl;
}
int Gares::get_loyer()
{
    return((this->proprietaire->get_nb_gares())*2500);
}

Joueur *Gares::get_proprietaire()
{
    return this->proprietaire;
}