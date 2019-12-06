#include "Empregado.h"
#include <string>

    Empregado::Empregado(){
    nome = "ff";
    sobrenome = "ff";
    salario = 0;
}


    void Empregado::SetSalario(double p){
        if(p>0) salario = p;
}
    void Empregado::SetNome(string c){
        nome = c;
}
    void Empregado::setSobrenome(string d){
        sobrenome = d;
}
    void Empregado::bonificar(double b){
        float taxa = (b + 100)/ 100;
        salario = salario * taxa;
}
    void Empregado::GetFuncionarios(){
        cout << "NOME: "<< nome << sobrenome << endl;
        cout << "SALARIO: " << salario << endl;
    }
