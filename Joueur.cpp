#include <string>
#include <iostream>
using namespace std;

#include "Joueur.h"

Joueur::Joueur(string name) //constructeur
{
  this->id = current_id_to_give;
  current_id_to_give++;
  this->fortune = 100000;
  this->position = 0;
  this->nom = name;
  this->jailed = false;
  this->nb_gares = 0;
}

int Joueur::get_nb_gares() const //récupère le nombre de gares possédés par un joueur
{
  return this->nb_gares;
}

void Joueur::paiement(int argent, Joueur *cible)// paiement entre joueurs
{ 
  // on ajoute le montant au joueur ciblé
   cible->add_fortune (argent);
  // on soustrait le montant au joueur actuelle 
  this->fortune = this->fortune - argent;
}

void Joueur::add_gare() //ajouter une gare au joueur
{
  this->nb_gares =  (this->nb_gares + 1) ;
}

void Joueur::affiche_position() const //affiche la position du joueur
{
  cout<<"Joueur "<< this->position << " : "<< endl; 
}

bool Joueur::get_jail() const//renvoi l'état du joueur (jailed)
{
  return (this->jailed);
}

void Joueur::set_jail() //met jailed à vrai si faux et faux si vrai
{
  this->jailed = !(this->jailed);
}

int Joueur::get_fortune() const//renvoi la fortune du joueur
{
  return this->fortune;
}

void Joueur::add_fortune(int montant) //ajoute ou retire un montant au joueur      
{
  this->fortune += montant;
}

int Joueur::get_id() const//renvoi l'id du joueur  
{
  return this->id;
}

int Joueur::get_position() const{
  return this->position;
}

void Joueur::set_position(int pos){
  this->position = pos;
}
