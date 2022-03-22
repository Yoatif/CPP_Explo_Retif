#ifndef EXERCICE5_H
#define EXERCICE5_H

#include <string>

class Lieu{

    private:
        char nom;
        char description;
        int difficultee[20]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        int endurance = 100;

    public:
        Lieu(){}
        virtual void afficheLieu(){}
        virtual void afficheDescription(){}
        virtual void setDifficultee(){}
        virtual void setEndurance(){}


};

#endif