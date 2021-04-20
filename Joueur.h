//
//  Joueur.h
//  Monopoly
//
#ifndef Joueur_h
#define Joueur_h

#include <string>
using namespace std;

static int current_id_to_give = 0;

class Joueur{

    protected:

        int id; //identifiant 1 à 5
        int nb_gares; //nombre de gares possédés par le joueur
        string nom; //nom du joueur
        int fortune;
        bool jailed; //vrai = en prison / faux = libre
        int position; //position du joueur sur le plateau
        
    public:

        Joueur(string name);
        bool paiement(int argent, Joueur *cible);// paiement entre joueurs
        int get_nb_gares() const; //récupère le nombre de gares possédés par un joueur
        void add_gare(); //ajouter une gare au joueur
        void affiche_position() const; //affiche la position du joueur
        bool get_jail(); //renvoi l'état du joueur (jailed)
        void set_jail(); //met jailed à vrai
        int get_fortune(); //renvoi la fortune du joueur
        void add_fortune(int montant); //ajoute ou retire un montant au joueur     
        int get_id(); //renvoi l'id du joueur  
        int get_position();  
        void set_position(int pos);

};

#endif /* Joueur_h */