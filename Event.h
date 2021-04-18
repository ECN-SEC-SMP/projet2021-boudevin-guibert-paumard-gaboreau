#ifndef Event_h 
#define Event_h 
#include "Case.h"


class Event : public Case

{ 


public:

 
 virtual void action (Joueur J_actuel) = 0; //virtuelle pure

  
};
#endif
