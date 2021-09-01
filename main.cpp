#include <iostream>
#include "De.h"
using namespace std;
int main() {
    /********************1.1*******************/
    De de1=De();
   de1.lancer();
   cout<<de1.valeur<<endl;
   /******************1.2***********************/
    De de2=De();
    de2.lancer();
    cout<<de2.valeur<<endl;
    cout<<de1.valeur+de2.valeur<<endl;
    /******************1.3**********************/


    return 0;
}
