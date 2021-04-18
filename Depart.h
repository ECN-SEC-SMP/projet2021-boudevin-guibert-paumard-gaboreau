#ifndef Depart_h 
#define Depart_h 

class Depart : public Event
{ 

  public :

  

    virtual void action(Joueur J_actuel) override ; //Chance hérite de sa propre classe action

};

#endif
