#include <iostream>
#include <string>
#include <stdio.h>
#include "Invoice.h"
#define N 31

using namespace std;

int main(){

    int op,i=0,o;
    float p;
    Invoice prod[N];
    float soma = 0;

while(1){

    cout << "==================================================" << endl;
    cout << "[1] Cadastrar produto" << endl;
    cout << "[2] Consultar produtos" << endl;
    cout << "[3] Calcular total" << endl;
    cout << "[4] Sair " << endl;
    cout << "==================================================" << endl;
    cout << "Selecione uma opcao: " ;
    cin >> op;

    switch(op){

    case 1:

        cout << "Digite o codigo do produto: " ;
        cin >> o;
        prod[i].setNum(o);
        cout << "Digite o preco do produto: " ;
        cin >> p;
        prod[i].setPrice(p);
        cout << "Digite a quantidade de itens: ";
        cin >> o;
        prod[i].setQty(o);
        cout << "Digite a descricao do produto: ";
        cin >> prod[i].des;
        i++;
        break;

    case 2:
        int j;
        for(j=0;j<N;j++){
            prod[j].GetInvoice();
        }
        break;

    case 3:
            int a;
        for(a=0;a<N;a++){
            float pAtual = prod[a].CalculaAmount();
            soma = soma + pAtual;
        }
            cout << "Valor total: " << soma << endl;
        break;

    case 4:
        cout << "\tSaindo..." << endl;
        return 1;

    default:
        cout << "Opcao nao encontrada" << endl;
        break;
    }
}
    return 0;
}
