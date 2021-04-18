#ifndef Event_h 
#define Event_h 

#include "Case.h"
#include "Joueur.h"

class Event : public Case

{ 

public:

    virtual void action (Joueur *cible) = 0; //virtuelle pure
    virtual void afficher_case() override;
    virtual void get_loyer() override;
  
};
#endif
