#ifndef Prison_h 
#define Prison_h 

#include "Event.h"

class Prison : public Event
{ 

  public :

    virtual void action() override ; //Chance hérite de sa propre classe action

};

#endif
