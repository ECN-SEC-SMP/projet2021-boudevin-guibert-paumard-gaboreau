#ifndef Chance_h 
#define Chance_h 

#include "Case.h"


class Chance : public Case { 

  public :

    Chance();

    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action
    virtual int get_loyer() const override; // méthode vide
    virtual Joueur* get_proprietaire() const override;

    std::ostream & do_print(std::ostream & c) const override{
      return  c << "Case Chance";
    }; 

};

#endif