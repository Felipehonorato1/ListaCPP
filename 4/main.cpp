#include <iostream>
#include "Data.h"

using namespace std;

int main(){
    Data cp = Data(18,9,2000);
    cout << cp.getDia() << endl;
    cout << cp.getMes() << endl;
    cout << cp.getAno() << endl;
    cout << cp.GetMesExtenso() << endl;

    Data atual = Data(5,12,2019);
    cout << atual.getDia() << endl;
    cout << atual.getMes() << endl;
    cout << atual.getAno() << endl;
    cout << atual.GetMesExtenso() << endl;

    Data bis = Data(1,1,2016);

    cout << "Comparado cp a atual resultado esperado: -1! Resultado obtido: "<< cp.Compara(atual)  << endl; 
    
    cout << "Comparado atual a cp resultado esperado: 1! Resultado obtido: " << atual.Compara(cp) << endl;

    cout << "Comparado cp a cp resultado esperado: 0 ! Resultado obtido " << cp.Compara(cp) << endl;

    cout << "Verificando se eh bissexto: " << cp.IsBissexto() << endl;
    cout << "Verificando se eh bissexto: " << atual.IsBissexto() << endl;
    cout << "Verificando se eh bissexto: " << bis.IsBissexto() << endl;
    
    
    
    return 0;
}