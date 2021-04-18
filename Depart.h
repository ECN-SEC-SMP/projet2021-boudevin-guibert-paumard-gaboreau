#ifndef Depart_h 
#define Depart_h 

#include "Event.h"

class Depart : public Event
{ 

  public :

<<<<<<< HEAD
  

    virtual void action(Joueur J_actuel) override ; //Chance hérite de sa propre classe action
=======
    Depart();
    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action
>>>>>>> 63102f0b245eae7ace7e58efe185a0fade3a6f1f

};

#endif
