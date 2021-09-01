//
// Created by eric on 01/09/2021.
//

#ifndef TP1LESDES_DE100_H
#define TP1LESDES_DE100_H


class De100 {
private:
    int valeur;


public:
    De100();

    void lance();
    bool exact(const int chiffre) const;
    bool plusgrand(const int chiffre) const;
    bool pluspetit(const int chiffre) const;

    int getValeur() const;
};


#endif //TP1LESDES_DE100_H
