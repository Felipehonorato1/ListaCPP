#include <iostream>
#include <string>
#include "Empregado.h"
#define N 50

using namespace std;

void MenuPrincipal(){
    cout << "_______________________________________________" << endl;
    cout << "[1] Cadastrar empregado" << endl;
    cout << "[2] Listar empregados" << endl;
    cout << "[3] Bonificar" << endl;
    cout << "[4] Sair" << endl;
    cout << "_______________________________________________" << endl;
}

int main()
{
    Empregado func[N];
    int op,iterF=0,idade=0;
    while(1){

        MenuPrincipal();
        cout << "Selecione uma opcao: ";
        cin >> op;
        cout << "_______________________________________________" << endl;


            switch(op){
            case 1:
            cout << "NOME: ";
            cin >> func[iterF].nome;
            cout << "SOBRENOME: ";
            cin >> func[iterF].sobrenome;
            cout << "SALARIO: ";
            cin >> func[iterF].salario;
            iterF++;
            break;
            case 2:
                for(int a=0;a<N;a++){
                    if(func[a].salario != 0){
                        func[a].GetFuncionarios();
                    }

                }
            break;

            case 3:
                cout << "BONUS EM %: ";
                double bonus;
                cin >> bonus;
                for(int j=0;j<N;j++){
                    if(func[j].salario !=0){
                        func[j].bonificar(bonus);
                    }
                }
            break;

            case 4:

                cout << "SAINDO" << endl;
                return 1;

            break;
            default:
                cout << "OPCAO INVALIDA" << endl;
                break;
            }
    }
    return 0;
}
