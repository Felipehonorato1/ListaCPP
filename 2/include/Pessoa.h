#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa(string n,int i,unsigned int tel);
        Pessoa(string n);


        string nome;
        int idade;
        unsigned int telefone;

        void SetNome(string n);
        void SetIdade(int i);
        void SetTelefone(unsigned int tel);

        void GetInfo();

};

#endif // PESSOA_H
