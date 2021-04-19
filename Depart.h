#ifndef Depart_h 
#define Depart_h 

#include "Case.h"

class Depart : public Case
{ 

  public :

    Depart();
    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action


};

#endif