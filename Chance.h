#ifndef Chance_h 
#define Chance_h 

#include "Event.h"
#include "Joueur.h"

class Chance : public Event
{ 

  public :

    Chance(Joueur *J_case);

    virtual void action() override ; //Chance hérite de sa propre classe action

};

#endif
