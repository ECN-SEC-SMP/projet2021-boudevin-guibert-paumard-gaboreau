#include "Constructible.h"


int Constructible::get_nb_maison() const
{
    return nb_maison;
}
int Constructible::get_nb_hotel() const
{
    return nb_hotel;
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
        nb_maison++;
        return 1;
     }
        
    else if(nb_maison == 4)
     {
        if(nb_hotel <0)
        nb_hotel++;
        return 1;
     }
}



void Constructible::action(Joueur *cible) //acheter case, acheter logement, payer loyer
{
    if(this ->proprietaire == nullptr) //si pas de proprio, on essaie d'acheter
    {
    if(cible->get_fortune() >= get_loyer() && this ->proprietaire == nullptr)
    this->proprietaire = cible; //si le joueur à assez d'argent, il achète la case
    }
    else if(this -> proprietaire == cible) //si le joueur tombe sur une de ces propriétés, il tente d'acheter un logement
    {
        add_logements();
    }
    else if(this -> proprietaire != cible) //si le joueur tombe sur la case d'un autre joueur, il paye le loyer
    {
        cible ->add_fortune(get_loyer());
        this ->proprietaire->add_fortune(get_loyer());
    }
}
Joueur *Constructible::get_proprietaire()
{
    return this->proprietaire;
}
void Constructible::afficher_case()
{
    if(this->proprietaire == nullptr)
    cout << "cette case ne possède pas de proprio" <<endl;
    else
    cout<<"propriétaire = " <<Joueur.id <<endl;

    cout<<"cette case possède " <<nb_maison <<"maison"<<endl;
    cout<<"cette case possède " <<nb_hotel <<"hotel"<<endl;


}
int Constructible::get_loyer()
{
    return(500+500*nb_maison + 2500*nb_hotel);
}
Constructible::Constructible(int cout)
{
    prix = cout;
}