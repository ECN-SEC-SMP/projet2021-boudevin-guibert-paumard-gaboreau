#include "Constructible.h"
#include <string>
using namespace std;
#include <iostream>     // std::cout
#include <algorithm>    // std::replace
#include <vector>       // std::vector
#include <iterator>

void Constructible::afficher_case() {
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

  // si le terrain comporte une ou des maisons
  if(this->nb_maison != 0){
  vs.push_back(to_string(this->nb_maison));
    // si une seule maison
    if(this->nb_maison == 1){ vs.push_back("maison,"); }
    // si plusieurs maisons
    else{vs.push_back("maisons,");}
  }

    // si le terrain comporte un ou des hotels
  if(this->nb_hotel != 0){
  vs.push_back(to_string(this->nb_hotel));
    // si un seul hotel
    if(this->nb_hotel == 1){ vs.push_back("hotel,"); }
    // si plusieurs hotels
    else{vs.push_back("hotels,");}
  }

  //affichage loyer
  vs.push_back("loyer =");
  vs.push_back(to_string(this->loyer));
 }


  copy(vs.begin(),vs.end(),ostream_iterator<string>(cout," "));
  cout << endl;

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
//todo : modifier la méthode pour quelle ne fasse que le payement de loyer et l'achat des maisons/hotel
void Constructible::action(Joueur *cible) //acheter case, acheter logement, payer loyer
{

    if(this -> proprietaire == cible) //si le joueur tombe sur une de ces propriétés, il tente d'acheter un logement
    {
        add_logements();
    }
    else if(this -> proprietaire != cible) //si le joueur tombe sur la case d'un autre joueur, il paye le loyer
    {
        cible ->add_fortune(get_loyer());
        this ->proprietaire->add_fortune(get_loyer());
    }
}
Joueur *Constructible::get_proprietaire() //renvoie un pointeur vers le propriétaire, renvoie nullptn si celui ci n'exiset pas
{
    return this->proprietaire;
}

int Constructible::get_loyer() //le loyer est calculé en fonction du nombre de maisons et du nombre d'hotel sur la case
{
    return((this ->loyer)+(this -> loyer)*this->nb_maison + (this->prix)*nb_hotel)*2;
}

int Constructible::get_prix() //renvoie le prix de la case
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


bool Constructible :: is_available() //renvoie 1 si il y a un proprio, 0 sinon
{
    if(this ->get_proprietaire() == nullptr)
    return 0;
    else
    return 1;
}
