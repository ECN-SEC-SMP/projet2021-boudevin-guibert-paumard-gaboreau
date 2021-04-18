#ifndef Event_h 
#define Event_h 

#include "Case.h"

class Event : Case

{ 

public:

    virtual void action () = 0; //virtuelle pure
    virtual void afficher_case() override;
    virtual void get_loyer() override;
  
};
#endif
