#include <iostream> /* bibliothèque d'entrée et sortie standard*/
#include <string>



int main () /* délimite la fonction principale */
{
    int destination;

    std::cout << "Bienvenue chez ETPA travelling." << std::endl;
    std::cout << "les destinations actuelement en promo sont : 1) l'Ukraine 2) le Mali" << std::endl;
    std::cout << "quel destinations souhaitez vous reservé ?" << std::endl;
    std::cin >> destination;
    if (destination== 1){
        std::cout << "vous etes arrivé en Ukraine." << std::endl;
    }
    else{
        std::cout << "vous etes arrivé au Mali." << std::endl;
    }
    
    return 0:
}