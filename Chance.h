#ifndef Chance_h 
#define Chance_h 

#include "Case.h"
#include "Joueur.h"

class Chance : public Case { 

  public :

    Chance();

    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action

    std::ostream & do_print(std::ostream & c) const override{
      return  c << "Case Chance";
    }; 

};

#endif