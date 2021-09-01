//
// Created by eric on 01/09/2021.
//

#include <cstdlib>
#include <ctime>
#include "De.h"

De::De() {
srand(time(NULL)); //initialise la fonction random
lancer(); //affecte à la valeur un entier entre 1 et 6
}

void De::lancer() {
this->valeur=rand()%6+1; //affecte à la valeur un entier entre 1 et 6
}

bool De::gagne(De &de1, De &de2, De &de3) {
    return false;
}
