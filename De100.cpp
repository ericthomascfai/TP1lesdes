//
// Created by eric on 01/09/2021.
//

#include "De100.h"
#include <chrono>
#include <cstdlib>
#include <thread>
#include <iostream>


De100::De100() {
    srand(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count()); //srand précision à la milliseconde
    lance();
    std::this_thread::sleep_for(std::chrono::milliseconds(1)); //temporisation 1 ms
}



void De100::lance() {
    valeur = rand() % 100 + 1;
}

bool De100::exact(const int chiffre) const {

    return chiffre==valeur;

}

bool De100::plusgrand(const int chiffre) const {
    return chiffre>valeur;
}

bool De100::pluspetit(const int chiffre) const {
    return  chiffre<valeur;
}

int De100::getValeur() const {
    return valeur;
}
