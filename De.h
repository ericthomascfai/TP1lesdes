//
// Created by eric on 01/09/2021.
//

#ifndef TP1LESDES_DE_H
#define TP1LESDES_DE_H


class De {

    /********************attributs*****************/
public:
    int valeur;
    bool etat; //permet de savoir si le dé est piper ou pas
    /******************constructeur****************/
    De();
    /*******************méthodes*******************/
    void lancer();
    static bool gagne(De &de1,De &de2, De &de3);
    void piper();


};


#endif //TP1LESDES_DE_H
