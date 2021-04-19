#ifndef Chance_h 
#define Chance_h 

#include "Case.h"

class Chance : public Case
{ 

  public :

    Chance();

    virtual void action(Joueur *cible) override ; //Chance hérite de sa propre classe action
    virtual void afficher_case() override; //méthode vide 
    virtual int get_loyer() override; // méthode vide
    virtual Joueur* get_proprietaire() override;

  
};

#endif