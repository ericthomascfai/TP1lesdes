//
// Created by eric on 01/09/2021.
//

#include <cstdlib>
#include <ctime>
#include <chrono>
#include "De.h"

De::De() {

lancer();
etat=false; //le dé n'est pas pipé à sa création
}

void De::lancer() {

    if(!etat)
    this->valeur=rand()%6+1; //affecte à la valeur un entier entre 1 et 6
    else {
        while (valeur != 4 && valeur != 2 && valeur != 1)
            this->valeur = rand() % 4 + 1;
    }
}

bool De::gagne(De &de1, De &de2, De &de3) {

    if((de1.valeur+de2.valeur+de3.valeur)==7&&(de1.valeur==4||de2.valeur==4||de3.valeur==4))
    {
        return true;
    }
    else
    return false;
}

void De::piper() {
    etat=true;

}
