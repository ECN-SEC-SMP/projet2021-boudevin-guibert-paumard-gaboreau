#ifndef Plateau_h 
#define Plateau_h 

#include <iostream>
#include <stdio.h>

using namespace std;

class Plateau{ 

protected:

    int id_case;
    string nom;

public:

    virtual void afficher_case() = 0;

    virtual void get_loyer() = 0;

};

#endif