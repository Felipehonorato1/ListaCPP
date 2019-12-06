#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>
#include <iostream>

using namespace std;

class Empregado
{
    public:
        Empregado();
        string nome,sobrenome;
        double salario;

        void SetSalario(double p);
        void SetNome(string c);
        void setSobrenome(string d);

        void bonificar(double b);

        void GetFuncionarios();
};

#endif // EMPREGADO_H
