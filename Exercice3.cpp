#ifndef EXERCICE3_CPP
#define EXERCICE3_CPP

#include "Exercice3.h"
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
    void setDifficultee(){
        string destination;
        if (destination == Ukraine){
            int difficultee = 19;
        }
        else if (destination == Mali)
        {
            int difficultee = 11;
        }

        else{
            int difficultee = 1;
        }
    }
    }


    

  
#endif