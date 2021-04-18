#ifndef Chance_h 
#define Chance_h 

#include "Event.h"

class Chance : public Event
{ 

  public :

<<<<<<< HEAD

    virtual void action(Joueur J_actuel) override ; //Chance hérite de sa propre classe action

=======
    Chance();

    virtual void action(Joueur *cible) override ; //Chance hérite de sa propre classe action
>>>>>>> 63102f0b245eae7ace7e58efe185a0fade3a6f1f

};

#endif