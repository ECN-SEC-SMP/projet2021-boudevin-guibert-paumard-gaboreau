<<<<<<< HEAD
#ifndef Case_h 
#define Case_h 
=======
#ifndef CASE_h 
#define CASE_h 
>>>>>>> 63102f0b245eae7ace7e58efe185a0fade3a6f1f

#include <iostream>
#include <stdio.h>

using namespace std;

<<<<<<< HEAD
class Case { 
=======
class Case
{ 
>>>>>>> 63102f0b245eae7ace7e58efe185a0fade3a6f1f

protected:

    int id_case;
    string nom;

public:

    virtual void afficher_case() = 0;
    virtual void get_loyer() = 0;

};

#endif