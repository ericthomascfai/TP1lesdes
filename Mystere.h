//
// Created by eric on 03/09/2021.
//

#ifndef TP1LESDES_MYSTERE_H
#define TP1LESDES_MYSTERE_H


#include "De100.h"

class Mystere {

private:
    De100 de100;
    int nbcoupsmax;

public:
    Mystere();
    int saisiejoueur();
    void jeu();


};


#endif //TP1LESDES_MYSTERE_H
