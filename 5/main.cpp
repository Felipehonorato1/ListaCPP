#include <iostream>
#include "Horario.h"

using namespace std;

int main(){

    Horario dd = Horario(1,59,59);

    cout << dd.getHora() << ":" << dd.getMinuto() << ":" << dd.getSegundo() << endl;
    dd.AvancarSegundo();
    cout << "POS AUMENTO: " << endl;
    cout << dd.getHora() << ":" << dd.getMinuto() << ":" << dd.getSegundo() << endl;




    return 0;
}