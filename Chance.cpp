#include <iostream>
using namespace std;
#include "Event.h"
#include "Chance.h"
#include "Joueur.h"


<<<<<<< HEAD

void Chance::action(Joueur J_actuel){
  
  cout << "Le joueur tire une carte chance" << endl;
  int carte = rand() % 12;

  switch (carte) {
    case 0 : {
      cout << "C'est votre jour de paye mais vous vous appelez Valentin, recevez le minimum  750€ sans la prime d'activité faut pas abuser" << endl;

    // rajouter l'argent du joueur
    //J_actuel. 
    }
       
      case 1 :{
         cout << "Erwan a sortis 5 t-shirt pour la SEC vous les acheter tous même le lila car il est stylé, vous lui devez 100€" << endl;
    // enlever l'argent du joueur
    //J_actuel. 
      }
        
      case 2: {
         cout << " Vous travaillez chez Thales et obtenez 320€ de chèques vacance" << endl;
    // rajouter l'argent du joueur
    //J_actuel.       
      }

      case 3: {
         cout << "Vous avez liché tout le weekend,la note est salé...Vous devez 300€ de pumpkin. En plus vous avez perdu à Chi-fou-liche contre Colmant" << endl;
    // enlever l'argent du joueur
    //J_actuel.   

      }
      case 4: {
         cout << "Vous remerciez la CAF et touchez 300€ d'APL" << endl;
    // rajouter l'argent du joueur
    //J_actuel. 

      }  
      case 5: {
         cout << "Payez votre adhésion au BDE, 100€" << endl;
    // enlever l'argent du joueur
    //J_actuel. 
      }  

      case 6: {
         cout << "C'est votre anniversaire, mais comme on a la flemme que chaque joueur paye on vous file directement 200€" << endl;
    // Rajouter l'argent du joueur
    //J_actuel. 
      } 
      case 7: {
         cout << "Vous sortez des cours et aller boire un coup avec les profs, ça finis en tourner général à 200€ au Berlin" << endl;
    // enlever l'argent du joueur
    //J_actuel. 
      } 
      case 8: {
         cout << "Elon Musk vient de tweeter 'I LOVE DOGECOIN', par chance vous en aviez un peu, vous gagnez 150€ " << endl;
    // rajoutez l'argent du joueur
    //J_actuel. 
      } 
      case 9: {
         cout << "On vous surnome la Chic et vous devez payer vos frais dentaire, 150€" << endl;
    // enlever l'argent du joueur
    //J_actuel. 
      } 
      case 10: {
         cout << "Vous retirez une partie de votre investisemment en crypto monnaie, vous récupérer 500€ " << endl;
    // rajoutez l'argent du joueur
    //J_actuel. 
      }
      case 11: {
         cout << "Vous en avez marre d'acheter des maison et vous vous lancez dans le monde des cryptomonnaie, vous commencez fort avec 750€ " << endl;
    // enlevez l'argent du joueur
    //J_actuel. 
      }
      default: {

        break;   
    }
  }
=======
// Chance::Chance(Joueur J_case){
//   this->nom = "Lion";
// }
>>>>>>> 63102f0b245eae7ace7e58efe185a0fade3a6f1f

// };