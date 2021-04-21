#ifndef Depart_h 
#define Depart_h 

#include "Case.h"

class Depart : public Case
{ 

  public :

    Depart();
  
    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action
    virtual int get_loyer() const override; // méthode vide
    virtual Joueur* get_proprietaire() const override;

    std::ostream & do_print(std::ostream & c) const override{
      return  c << "Case Départ";
    }; 
};

#endif