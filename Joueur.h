//!@file Joueur.h
//!@brief Classe Joueur, décrit un joueur participant à la partie de monopoly
//!@author Théo

#ifndef Joueur_h
#define Joueur_h

#include <string>
using namespace std;

static int current_id_to_give = 0;

class Joueur{

    protected:

        int id; 
        string nom;
        int nb_gares; /*!< Nombre de Gares possédées par le joueur*/
        
        int fortune = 100000; /*!< Fortune du joueur, 100 000 au départ*/
        bool jailed; /*!< vrai si le joueur est libre, sinon il est en prison*/
        int position; /*!< Position du joueur sur le plateau*/
        
    public:

        //!@brief Constructeur de la classe Joueur
        //!@param name argent est le montant du transfère
        Joueur(string name);

        //!@brief Fonction permettant de transférer de l'argent à un autre joueur 
        //!@param argent argent est le montant du transfère
        //!@param cible cible est un pointeur vers un le joueur à transférer l'argent
        void paiement(int argent, Joueur *cible);// paiement entre joueurs

        //!@brief Fonction permettant d'ajouter une gare au joueur
        void add_gare();

        //!@brief Modifie la fortune du joueur
        //!@param montant argent à transférer au joueur
        void add_fortune(int montant);   

        //!@brief Affiche les différentes informations du joueur
        void afficher_joueur() const;

        //!@brief Récupère le nom du joueur
        //!@return Retourne le nom du joueur
        string get_nom() const;

        //!@brief Récupère l'id du joueur
        //!@return Retourne l'id du joueur
        int get_id() const;

        //!@brief Récupère la fortune du joueur
        //!@return Retourne la fortune du joueur
        int get_fortune() const;

        //!@brief Récupère la position du joueur
        //!@return Retourne la position du joueur
        int get_position() const; 

        //!@brief Change la position du joueur
        //!@param pos la position à laquelle le joueur doit aller
        void set_position(int pos);

        //!@brief Récupère l'était jail du joueur
        //!@return Retourne l'état jail du joueur
        bool get_jail() const;

        //!@brief Change l'état jail du joueur
        void set_jail();

        //!@brief Récupère le nombre de gares possédés par un joueur
        //!@return Retourne le nombre de gares possédés par un joueur
        int get_nb_gares() const; 
};

#endif /* Joueur_h */