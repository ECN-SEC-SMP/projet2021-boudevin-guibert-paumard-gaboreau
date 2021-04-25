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
  cout << "Joueurs au sein de la partie :" << endl;
  this->afficher_joueurs();
  cout << "-------------------------------" << endl;
  cout << "-------------------------------" << endl;
  cout << "Début de la partie" << endl;
  cout << "-------------------------------" << endl;
  cout << "-------------------------------" << endl;
  this->joueur_actuel = this->list_joueurs.front();
  //On joue tant qu'il n'y a pas un joueur gagnant 
  while(this->tour_de_jeu()){
    sleep(1);
  }
  if(this->list_joueurs.size() == 1){
    cout << "Le gagnant est : " << endl;
    //Afficher joueur !
    this->list_joueurs.front()->afficher_joueur();
  }
};

bool Partie::tour_de_jeu() // joue le tour
{
  //Checker l'état prison
  if(this->joueur_actuel->get_jail()){
    this->joueur_actuel->set_jail();
    cout << "Le joueur était en prison, il passe son tour " << endl;
  }
  else{

    //Lancer le dès
    int score_des = this->lancer_de_des();

    int fortune_actuelle = this->joueur_actuel->get_fortune();

    cout << "Au tour de : " << this->joueur_actuel->get_nom() << endl << 
    "Fortune :" << fortune_actuelle << endl <<
    "Position de départ : " << *(this->Plat->get_plateau_de_jeu()[this->joueur_actuel->get_position()]) << endl << 
    "Score du lancé : " << score_des << endl;

    //Avancer le joueur 
    this->avance_joueur(score_des);

    //Affiche la case d'arrivee
    cout << "Nouvelle position : " << *(this->Plat->get_plateau_de_jeu()[this->joueur_actuel->get_position()]) << endl;

    //Lancer la case et l'action
    this->lancer_action_case(score_des);

    //Afficher la fortune du joueur si celle-ci a été modifée
    if(this->joueur_actuel->get_fortune() != fortune_actuelle){
        cout << "Nouvelle fortune : " << this->joueur_actuel->get_fortune() << endl; 
    }

    //Vérifier la fortune du joueur -> supprimer liste des joueurs
    if(this->joueur_actuel->get_fortune() < 0){
      cout << "Le joueur n'ayant plus assez de fonds il est retiré de la partie" << endl;
      this->Plat->supprimer_proprietees(this->joueur_actuel);
      this->list_joueurs.remove(this->joueur_actuel);
    }

    //Test le nb de joueurs restants 
    if(this->list_joueurs.size() == 1){
        return false;
    }
 
  }
  cout << "--------------Fin du tour-----------------" << endl;
  //On passe au joueur suivant de la liste
  this->joueur_suivant();
  //Le tour est terminé et la partie peut continuer
  return true;
}

void Partie::joueur_suivant(){
    //Changer de joueur
    auto l_front = this->list_joueurs.begin();
    advance(l_front, (this->joueur_actuel->get_id() + 1) % this->list_joueurs.size());
    this->joueur_actuel = *l_front;
}

void Partie::lancer_action_case(int score_des){
    //Si le dès est impair et que la case n'a pas de propriétaire 
    if( score_des % 2 == 1 && this->Plat->get_plateau_de_jeu()[this->joueur_actuel->get_position()]->get_proprietaire() == nullptr ){
      //Si en plus la case est compatible avec Achetable alors on achète
      if(Achetable* ach = dynamic_cast<Achetable*>(this->Plat->get_plateau_de_jeu()[this->joueur_actuel->get_position()])) {
          ach->acheter(this->joueur_actuel);
      }
      else{
        //Sinon on effectue une action
        this->Plat->get_plateau_de_jeu()[this->joueur_actuel->get_position()]->action(this->joueur_actuel);
      }
    }
    //Sinon on effectue une action
    else{
      this->Plat->get_plateau_de_jeu()[this->joueur_actuel->get_position()]->action(this->joueur_actuel);
    }
}

void Partie::avance_joueur(int avancee)//avance de n nombre de case et on lui donne de l'argent s'il fait passe la ligne de départ
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

Joueur* Partie::get_joueur_actuel() const //renvoie le joueur actuel
{
  return this->joueur_actuel;
}

void Partie::afficher_joueurs() const{ //affiche l'ensemble des joueurs de la partie
  cout << "-------------------------------" << endl;
  for(Joueur *j : this->list_joueurs){
    j->afficher_joueur();
    cout << "-------------------------------" << endl;
  }
}