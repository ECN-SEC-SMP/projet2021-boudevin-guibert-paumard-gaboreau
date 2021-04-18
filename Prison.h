#ifndef Prison_h 
#define Prison_h 

class Prison : public Event
{ 

  public :

  

    virtual void action(Joueur J_actuel) override ; //Chance hérite de sa propre classe action

};

#endif
