#ifndef Chance_h 
#define Chance_h 

class Chance : public Event
{ 

  public :


    virtual void action(Joueur J_actuel) override ; //Chance hérite de sa propre classe action


};

#endif