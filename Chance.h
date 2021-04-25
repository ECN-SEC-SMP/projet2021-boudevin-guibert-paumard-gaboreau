//!@file Chance.h
//!@brief classe fille de de Case
//!@author Louis


#ifndef Chance_h 
#define Chance_h 

#include "Case.h"
#include "Joueur.h"

class Chance : public Case { 

  public :

    Chance();


    //! @brief la méthode action permet ici de tirer une carte  Chance parmis 12 et d'effectuer son effet
    //! @param joueur le paramètre cible est un pointeur sur un objet joueur
    //! @return void

    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action

    std::ostream & do_print(std::ostream & c) const override{
      return  c << "Case Chance";
    }; 

};

#endif