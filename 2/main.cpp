#include <iostream>
#include "Pessoa.h"
#include <string>
#define N 50


using namespace std;

void MenuPrincipal(){
    cout << "______________________________________________" << endl;
    cout << "[1] Cadastrar pessoa" << endl;
    cout << "[2] Listar pessoas" << endl;
    cout << "[3] Alterar pessoas" << endl;
    cout << "[4] Sair" << endl;
    cout << "______________________________________________" << endl;

}

int main()
{
    string nombre;
    Pessoa p[N] = Pessoa(" ",0,0);
    int op,idade;
    unsigned int telefone;
    string nome;
    int iter = 0;
    while(1){
    op = 0;
    MenuPrincipal();
    cout << "Selecione uma opcao: ";
    cin >> op;
    switch(op){

    case 1:

        cout << "NOME:" ;
        cin >> p[iter].nome;
        cout << "IDADE:";
        cin >> p[iter].idade;
        cout << "TELEFONE:";
        cin >> p[iter].telefone;
        cout << "Informacoes lidas com sucesso" << endl;
        iter++;
        break;

    case 2:
        for(int a=0;a<N;a++){
            if(p[a].nome != " "){
                p[a].GetInfo();
            }
        }
    break;
    case 3:
        cout << "Digite o nome do usuario para alterar: ";
        cin >> nombre;
        for(int j=0;j<N;j++){
            if(p[j].nome == nombre){
                cout << "IDADE:";
                cin >> p[j].idade;
                cout << "TELEFONE:";
                cin >> p[j].telefone;
                cout << "Informacoes alteradas com sucesso" << endl;
            }
        }
    case 4:
        return 1;

    default:
        cout << "Opcao invalida" << endl;
    }
    }
    return 0;
}
