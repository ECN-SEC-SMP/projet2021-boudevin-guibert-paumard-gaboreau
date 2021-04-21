#ifndef Prison_h 
#define Prison_h 

#include "Case.h"

class Prison : public Case
{ 

  public :

    Prison();
  
    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action
    virtual int get_loyer() const override; // méthode vide
    virtual Joueur* get_proprietaire() const override;
    virtual ostream& operator<<(ostream&s) override;
    
};

#endif