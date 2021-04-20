#include <iostream>
using namespace std;
#include "Chance.h"
#include "Joueur.h"
#include <time.h>       /* time */ //for random

// constructeur de Case chance
Chance::Chance (){};
void Chance::afficher_case() {
  cout << "CASE CHANCE/n" << endl;
};

int Chance::get_loyer(){return (0);};

Joueur* Chance::get_proprietaire() { return(nullptr);};

void Chance::action(Joueur *j){

  //initialisation de la seed aléatoirement
    srand (time(NULL));

  
  cout << "Le joueur tire une carte chance/n" << endl;
  // le joeur tire aléatoirement une carte parmis 12
  int carte = rand() % 12;

  switch (carte) {
    case 0 : {
      cout << "C'est votre jour de paye mais vous vous appelez Valentin, recevez le minimum  750€(x10) sans la prime d'activité faut pas abuser" << endl;

    // rajouter l'argent du joueur
     j->add_fortune(7500);
    }
       
      case 1 :{
         cout << "Erwan a sortis 5 t-shirts pour la SEC vous les acheter tous, même le lila car il est stylé, vous lui devez 100€(x10)" << endl;
    // enlever l'argent du joueur
    j->add_fortune(-1000);
      }
        
      case 2: {
         cout << " Vous travaillez chez Thales et obtenez 320€(x10) de chèques vacance" << endl;
    // rajouter l'argent du joueur
    j->add_fortune(3200);       
      }

      case 3: {
         cout << "Vous avez liché tout le weekend,la note est salée...Vous devez 300€(x10) de pumpkin. En plus vous avez perdu à Chi-Fou-Liche contre Colmant" << endl;
    // enlever l'argent du joueur
    j->add_fortune(-3000);  

      }
      case 4: {
         cout << "Vous remerciez la CAF et touchez 300€(x10) d'APL" << endl;
    // rajouter l'argent du joueur
    j->add_fortune(3000);  

      }  
      case 5: {
         cout << "Payez votre adhésion au BDE, 100€(x10) (diviser par deux car on est alternant faut pas abuser)" << endl;
    // enlever l'argent du joueur
    j->add_fortune(-500);  
      }  

      case 6: {
         cout << "C'est votre anniversaire, mais comme on a la flemme que chaque joueur paye, on vous file directement 200€(x10)" << endl;
    // Rajouter l'argent du joueur
    j->add_fortune(2000);  
      } 
      case 7: {
         cout << "Vous sortez des cours et aller boire un coup avec les profs, ça finis en tourner général à 200€(x10) au Berlin" << endl;
    // enlever l'argent du joueur
    j->add_fortune(-2000);
      } 
      case 8: {
         cout << "Elon Musk vient de tweeter 'I LOVE DOGECOIN', par chance vous en aviez un peu, vous gagnez 150€(x10) " << endl;
    // rajoutez l'argent du joueur
    j->add_fortune(1500);
      } 
      case 9: {
         cout << "On vous surnome la Chic et vous devez payer vos frais dentaire, 150€(x10)" << endl;
    // enlever l'argent du joueur
    j->add_fortune(-1500);
      } 
      case 10: {
         cout << "Vous retirez une partie de votre investisemment en crypto monnaie, vous récupérez 500€(x10) " << endl;
    // rajoutez l'argent du joueur
    j->add_fortune(5000);
      }
      case 11: {
         cout << "Vous en avez marre d'acheter des maison et vous vous lancez dans le monde des cryptomonnaies, vous commencez fort avec 750€(x10) " << endl;
    // enlevez l'argent du joueur
    j->add_fortune(7500); 
      }
      default: {

      cout << " C'est par défaut il se passe rien" << endl;
        break;   
    }
  }
};