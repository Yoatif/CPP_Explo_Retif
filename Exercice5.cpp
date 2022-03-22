#ifndef EXERCICE5_CPP
#define EXERCICE5_CPP

#include "Exercice5.h"
#include <iostream>
#include <string>


    Lieu::Lieu() :  {}
    
    void Lieu::afficheLieu(){
        foo[0] = "Ukraine";
        foo[1] = "Mali";
        foo[2] = "rentrer chez soit"
    }
    void Lieu::afficheDescription(){
        string destination;
        if (destination == Ukraine){
            std::cout << "pays d'europe de l'est"<< std::endl;
        }
        else if (destination == Mali)
        {
            std::cout << "pays d'Afrique"<< std::endl;
        }

        else{
            std:cout << "vous rentrez dans votre maison"
        }
    
    }
    void lieu::setEndurance(){
        string destination;
        int endurance = 100;
        if (destination == Ukraine){
            int endurance = endurance - difficultee[19];
        }
        else if (destination == Mali)
        {
            int endurance = endurance - difficultee[10];
        }

        else{
            int endurance = endurance - difficultee[0];
        }

    }
    }


    

  
#endif