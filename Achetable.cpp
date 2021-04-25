#include <string>

#include "Achetable.h"

Achetable::Achetable(int price,string nom_const){
    this->prix = price;
    this->nom = nom_const;
    this->proprietaire = nullptr;
}

int Achetable::get_prix() const{
    return this->prix;
};

bool Achetable::is_available() const{
    return this->proprietaire == nullptr;
};