#ifndef Chance_h 
#define Chance_h 

class Chance : public Event
{ 

  public :

    Chance(Joueur);

    virtual void action() override ; //Chance hérite de sa propre classe action

};

#endif
