#ifndef Prison_h 
#define Prison_h 

#include "Case.h"

class Prison : public Case
{ 

  public :

    Prison();
  
    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action
    virtual void afficher_case() override; //méthode vide 
    virtual int get_loyer() override; // méthode vide
        virtual Joueur* get_proprietaire() override;

};

#endif