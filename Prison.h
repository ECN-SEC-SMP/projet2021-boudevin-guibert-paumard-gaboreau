#ifndef Prison_h 
#define Prison_h 

//!@file Chance.h
//!@brief classe fille de de Case
//!@author Louis

#include "Case.h"

class Prison : public Case
{ 

  public :

    Prison();
    //! @brief la méthode action permet ici de passer le paramètre Jail du joueur à True
    //! @param joueur le paramètre cible est un pointeur sur un objet joueur
    //! @return void
    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action

    std::ostream & do_print(std::ostream & c) const override{
      return  c << "Case Prison";
    }; 
    
};

#endif