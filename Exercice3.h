#ifndef EXERCICE3_H
#define EXERCICE3_H

#include <string>

class Lieu{

    private:
        char nom;
        char description;
        int difficultee;
        char foo [3];

    public:
        Lieu(){}
        virtual void afficheLieu(){}
        virtual void afficheDescription(){}
        virtual void setDifficultee(){}


};

#endif