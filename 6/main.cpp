#include <iostream>
#include "Data.h"
#include "Horario.h"
#include "Voo.h"

using namespace std;

int main(){
    Data d1 = Data(18,9,2019);
    Horario h1 = Horario(19,0,0);

    Voo v1 = Voo(457,d1,h1);
    cout << v1.getNumero() << endl;
    cout << v1.getData() << endl;
    cout << v1.getHorario() << endl;
    v1.Ocupa(0);
    v1.Ocupa(2);
    v1.Ocupa(3);
    cout <<"Proximo assento disponivel: "<< v1.ProximoLivre() << endl;
    cout << "Assentos livres: " << v1.Espacos() << endl;



    return 0;
}