#ifndef Depart_h 
#define Depart_h 

#include "Event.h"

class Depart : public Event
{ 

  public :

    Depart();
    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action

};

#endif
