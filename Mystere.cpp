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
    for(int i=0;i<nbcoupsmax;i++)
    {
        int saisie=saisiejoueur(); //recupere la saisie du joueur
        if(de100.exact(saisie))
        {
            cout<<"Vous avez gagné!!!!!!!!!!"<<endl;
            break; // je casse la boucle
        }
        else
        if(de100.plusgrand(saisie))
        {
            cout<<"trop grand"<<endl;
        }
        else
        if(de100.pluspetit(saisie))
        {
            cout<<"trop petit"<<endl;
        }
        if(nbcoupsmax-1==i)

            cout<<"Vous avez perdu";
    }


}

Mystere::Mystere() {
    de100=De100(); //instanciation de de100
    nbcoupsmax=10; //assignation du nombre de coups
}
