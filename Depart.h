#ifndef Depart_h 
#define Depart_h 

//!@file Chance.h
//!@brief classe fille de de Case
//!@author Louis

#include "Case.h"
#include "Joueur.h"

class Depart : public Case
{ 

  public :

    Depart();
  
    //! @brief la méthode action permet ici de donner au joueur 15000€
    //! @param joueur le paramètre cible est un pointeur sur un objet joueur
    //! @return void


    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action

    std::ostream & do_print(std::ostream & c) const override{
      return  c << "Case Départ";
    }; 
};

#endif