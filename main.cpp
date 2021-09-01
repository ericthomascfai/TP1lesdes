#include <iostream>
#include "De.h"
#include "De100.h"

using namespace std;
int main() {
    srand(time(NULL));

        //initialise la fonction random
        /********************1.1*******************/
        De de1 = De();
        de1.piper();
        de1.lancer();
        cout << de1.valeur << endl;
        /******************1.2***********************/
        De de2 = De();
        de2.piper();
        de2.lancer();
        cout << de2.valeur << endl;
        //cout<<de1.valeur+de2.valeur<<endl;
        /******************1.3**********************/
        De de3 = De();
        de3.piper();
        de3.lancer();
        cout << de3.valeur << endl;
        cout << "test gagne " << De::gagne(de1, de2, de3) << endl;
        /****************1.4*************************/

        /*********************2.1********************/
        De100 de100=De100();
        de100.lance();
        cout<<de100.getValeur();
        cout<<de100.exact(10);


    return 0;
}
