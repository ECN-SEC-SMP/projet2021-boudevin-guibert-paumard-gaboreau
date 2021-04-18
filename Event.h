#ifndef Event_h 
#define Event_h 
#include "Case.h"

#include "Case.h"
#include "Joueur.h"

class Event : public Case

{ 

public:

<<<<<<< HEAD
 
 virtual void action (Joueur J_actuel) = 0; //virtuelle pure

=======
    virtual void action (Joueur *cible) = 0; //virtuelle pure
    virtual void afficher_case() override;
    virtual void get_loyer() override;
>>>>>>> 63102f0b245eae7ace7e58efe185a0fade3a6f1f
  
};
#endif
