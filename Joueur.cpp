#include "Joueur.h"
#include <string>
#include <iostream>
using namespace std;


Joueur::Joueur(int argent_depart,int position,string name) //constructeur
{
  this->id = current_id_to_give;
  current_id_to_give++;
  this->fortune = argent_depart;
  this->position = 0;
  this->nom = name;
}

bool Joueur::paiement(int argent, Joueur *cible)// paiement entre joueurs
{ 
  // si le joueur ne peut pas payer on renvoie faux
  if (this->fortune - argent < 0)
  {
    return(0);
  }
  else{
  // on ajoute le montant au joueur ciblé
   cible->add_fortune (argent);
  // on soustrait le montant au joueur actuelle 
  this->fortune = this->fortune - argent;
   
   return(1);

  }
}

int Joueur::get_nb_gares() const; //récupère le nombre de gares possédés par un joueur
{
  return this->nb_gares;
}

void Joueur::add_gare() //ajouter une gare au joueur
{
  this->nb_gares =  (this->nb_gares + 1) ;
}

void Joueur::affiche_position() const; //affiche la position du joueur
{
  cout<<"Joueur "<< this->position << " : "<< endl; 
}

bool Joueur::get_jail() //renvoi l'état du joueur (jailed)
{
  return (this->jailed);
}

void Joueur::set_jail() //met jailed à vrai si faux et faux si vrai
{
  this->jailed = !(this->jailed);
}

int Joueur::get_fortune() //renvoi la fortune du joueur
{
  return this->fortune;
}

void Joueur::add_fortune(int montant) //ajoute ou retire un montant au joueur      
{
  this->fortune = this->fortune + montant;
}

int Joueur::get_id() //renvoi l'id du joueur  
{
  return this->id;
}
