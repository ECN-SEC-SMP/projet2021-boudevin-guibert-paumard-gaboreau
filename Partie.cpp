#include "Partie.h"
#include <string>
#include <iostream>
using namespace std;

Partie::Partie(){
  
}; // constructeur

void Partie::tour_de_jeu() // joue le tour
{

}


Joueur* Partie::get_joueur_actuel() //renvoie le joueur actuel
{

}

void Partie::avance()//avance de n nombre de case
{

}

int Partie::lancer_de_des() //retourne un entier aléatoire de 1 à 6;
{
  srand(time(NULL)); //remise à 0 du rand
  return valde = (int)(rand() % 6 + 1); // Nombre aléatoire entre 1 et 6
}

void Partie::action() //action en cours
{

}

bool Partie::finDePartie() //renvoie "vrai" lorsqu'il ne reste plus qu'un joueur n'aillant pas fait fallite
{

}

//Si
void Partie::ajouter_joueurs(Joueur *j) //ajout de joueur
{
  
}