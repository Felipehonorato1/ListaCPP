#include "Pessoa.h"
#include <string>
#include <iostream>

using namespace std;

Pessoa::Pessoa(string n,int i,unsigned int t){
    nome = n;
    idade = i;
    telefone = t;
}

Pessoa::Pessoa(string n){
    nome = n;
}

void Pessoa::SetNome(string n){
    nome = n;
}
void Pessoa::SetIdade(int i){
    idade = i;
}
void Pessoa::SetTelefone(unsigned int tel){
    telefone = tel;
}

void Pessoa::GetInfo(){
    cout << nome << endl;
    cout << idade << endl;
    cout << telefone << endl;
}
