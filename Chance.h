#ifndef Chance_h 
#define Chance_h 

#include "Event.h"

class Chance : public Event
{ 

  public :

    Chance();

    virtual void action(Joueur *cible) override ; //Chance hérite de sa propre classe action

};

#endif
