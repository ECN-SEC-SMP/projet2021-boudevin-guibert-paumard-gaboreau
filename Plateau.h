//!@file Partie.h
//!@brief Classe Plateau, permet de décrire le plateau de jeu
//!@author Valentin 

#ifndef Plateau_h 
#define Plateau_h 

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <algorithm> 
#include <vector>       // std::vector

using namespace std;

#include "Joueur.h"
#include "Case.h"
#include "Achetable.h"
#include "Gares.h"
#include "Prison.h"
#include "Chance.h"
#include "Constructible.h"
#include "Depart.h"

class Plateau{ 

protected:

    vector<Case *> plateau_de_jeu; /*!< plateau_de_jeu contient les différentes cases du plateau (peuvent être soit Constructible, Achetable, Depart, Prison, Chance, Gares)*/

public:

    //!@brief Affichage de l'ensemble des cases du plateau de jeu
    void affichage_plateau() const;

    //!@brief Permet de remplir le plateau d'un terrain de jeu classique de monopoly
    void initPlateau(); 

    //!@brief Permet de déterminer le nombre de gares associées à un joueur
    //!@param j cible est un pointeur vers un objet de type joueur
    //!@return retourne le nombre de Gares associées au joueur *j
    int nbGares(Joueur* j) const;  

    //!@brief Constructeur de la classe Plateau
    Plateau();

    //!@brief Permet de récupérer le plateau de jeu actuel
    //!@return retourne le contenu de plateau_de_jeu
    vector<Case *> get_plateau_de_jeu() const;

    //!@brief Supprime l'ensemble des propriétés associées à un joueur et enlève les maisons et immeubles qui pouvaient être présents
    //!@param j cible est un pointeur vers un objet de type joueur
    void supprimer_proprietees(Joueur* j);

};

#endif