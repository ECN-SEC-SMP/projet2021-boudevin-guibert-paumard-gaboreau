#ifndef Prison_h 
#define Prison_h 

#include "Event.h"

class Prison : public Case
{ 

  public :

    Prison();
  
    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action

};

#endif
