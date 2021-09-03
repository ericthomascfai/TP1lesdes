//
// Created by eric on 03/09/2021.
//
using namespace std;

#include <iostream>
#include "Mystere.h"

int Mystere::saisiejoueur() {
    int saisie=0;
    cout<<"Veuillez saisir un nombre entre 1 et 100"<<endl;
    cin>>saisie;
    return saisie;
}

void Mystere::jeu() {

}

Mystere::Mystere() {
de100=De100(); //instanciation de de100
nbcoupsmax=10; //assignation du nombre de coups
}
