#ifndef Prison_h 
#define Prison_h 

#include "Event.h"

class Prison : public Event
{ 

  public :

<<<<<<< HEAD
  

    virtual void action(Joueur J_actuel) override ; //Chance hérite de sa propre classe action
=======
    Prison();
    
    virtual void action(Joueur *j) override ; //Chance hérite de sa propre classe action
>>>>>>> 63102f0b245eae7ace7e58efe185a0fade3a6f1f

};

#endif
