#include <string>
#include <iostream>
#include <assert.h>
extern "C"{
    #include <unistd.h>
}
using namespace std;

#include "Partie.h"

// constructeur
Partie::Partie(){
  this->joueur_actuel = nullptr;
  this->list_joueurs.clear();
  //On initialise un nouveau plateau de jeu
  this->Plat = new Plateau();
  this->Plat->initPlateau();
}; 

//Une fois que la quantité de joueurs inscrite est suffisante on peut démarrer une partie 
void Partie::demarrer_partie(){
  if(this->list_joueurs.size() < 2){
    cout << "Nombre de joueurs requis insuffisants" << endl;
    exit(-1);
  }
  else if(this->list_joueurs.size() > 5){
    cout << "Nombre de joueurs trop élevé" << endl;
    exit(-1);
  }
  this->joueur_actuel = this->list_joueurs.front();
  //On joue tant qu'il n'y a pas un joueur gagnant 
  while(this->tour_de_jeu()){
    sleep(1);
  }
  if(this->list_joueurs.size() == 1){
    cout << "Le gagnant est : " << endl;
    //Afficher joueur !
    this->list_joueurs.front()->affiche_position();
  }
};

bool Partie::tour_de_jeu() // joue le tour
{
  //Checker l'état prison
  if(this->joueur_actuel->get_jail()){
    this->joueur_actuel->set_jail();
    return false;
  }
  else{

    //Lancer le dès
    int score_des = this->lancer_de_des();

    //Avancer le joueur 
    this->avance(score_des);

    //Affiche la case d'arrivee
    this->Plat->get_plateau_de_jeu()[this->joueur_actuel->get_position()]->afficher_case();

    //Lancer la case et l'action
    this->Plat->get_plateau_de_jeu()[this->joueur_actuel->get_position()]->action(this->joueur_actuel);

    //Vérifier la fortune du joueur -> supprimer liste des joueurs
    if(this->joueur_actuel->get_fortune() < 0){
      this->list_joueurs.remove(this->joueur_actuel);
    }

    //Test le nb de joueurs restants 
    if(this->list_joueurs.size() == 1){
        return false;
    }
    //Changer de joueur
    auto l_front = this->list_joueurs.begin();

    advance(l_front, (this->joueur_actuel->get_id() + 1) % this->list_joueurs.size());

    this->joueur_actuel = *l_front;

    //cout << *l_front << '\n';

    return true;

  }
}

Joueur* Partie::get_joueur_actuel() //renvoie le joueur actuel
{
  return this->joueur_actuel;
}

void Partie::avance(int avancee)//avance de n nombre de case et on lui donne de l'argent s'il fait passe la ligne de départ
{
  if(avancee + this->joueur_actuel->get_position() > 39){
    this->joueur_actuel->add_fortune(7500);
  }
  this->joueur_actuel->set_position((this->joueur_actuel->get_position() + avancee) % 39);

}

int Partie::lancer_de_des() //retourne un entier aléatoire de 1 à 6;
{
  srand(time(NULL)); //remise à 0 du rand
  return (int)(rand() % 6 + 1); // Nombre aléatoire entre 1 et 6
}


bool Partie::finDePartie() //renvoie "vrai" lorsqu'il ne reste plus qu'un joueur n'aillant pas fait fallite
{
  return this->list_joueurs.size() == 1;
}

//Si il y a moins de 5 joueurs
bool Partie::ajouter_joueurs(Joueur *j) //ajout de joueur
{
  if(this->list_joueurs.size() > 5){
    return false;
  }
  else{
    this->list_joueurs.push_back(j);
    return true;
  }
}