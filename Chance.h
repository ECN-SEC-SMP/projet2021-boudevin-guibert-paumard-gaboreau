#ifndef Chance_h 
#define Chance_h 

#include "Case.h"

class Chance : public Case
{ 

  public :

    Chance();

    virtual void action(Joueur *cible) override ; //Chance hérite de sa propre classe action
    virtual void afficher_case() override;
    virtual void get_loyer() override;
};

#endif
