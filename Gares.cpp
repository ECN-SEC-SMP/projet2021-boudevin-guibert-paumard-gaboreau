#include "Achetable.h"
#include "Gares.h"
#include <iostream>     // std::cout
#include <algorithm>    // std::replace
#include <vector>       // std::vector
#include <iterator>

void Gares::afficher_case() {
  // création du vecteur
  vector<string> vs;
  
  // on ajoute le nom de la case
  vs.push_back(this->nom);

  //on ajoute le coût
  vs.push_back ("(coût : "+ to_string( this->prix)+")");
  
 // test si pas de propriétaire
 if(this->proprietaire == nullptr){

  vs.push_back("- sans propriétaire");

 }
 // si il y a un propriétaire
 else{
  
  vs.push_back("propriétaire :");
  vs.push_back(this->proprietaire->nom);

  //affichage loyer
  vs.push_back("loyer =");
  vs.push_back(to_string(this->loyer));
 }

  copy(vs.begin(),vs.end(),ostream_iterator<string>(cout," "));
  cout << endl;

};

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

int Gares::get_loyer() //retourne le loyer que doit payer un joueur en fonction du nombre de gare possédé
{
    return((this->proprietaire->get_nb_gares())*(this->loyer));
}

Joueur *Gares::get_proprietaire()
{
    return this->proprietaire;
}

int Gares::get_prix()
{
    return this->prix;
}

void Gares::acheter(Joueur *cible) 
{
    cible ->add_fortune(-1*(this ->get_prix()));
    this-> proprietaire = cible;
}


bool Gares :: is_available() //renvoie 1 si il y a un proprio, 0 sinon
{
    if(this ->get_proprietaire() == nullptr)
    return 0;
    else
    return 1;
}
