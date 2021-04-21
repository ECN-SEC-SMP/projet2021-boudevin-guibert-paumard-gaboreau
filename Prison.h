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

    std::ostream & do_print(std::ostream & c) const override{
      return  c << "Case Prison";
    }; 
    
};

#endif