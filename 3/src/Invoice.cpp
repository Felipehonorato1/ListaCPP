#include "Invoice.h"
#include <string>
#include <stdio.h>

using namespace std;

Invoice::Invoice(){
    preco = 0;
    numero = 0;
    quantidade = 0;
}

void Invoice::setNum(int num){
    numero = num;
}

void Invoice::setQty(int qtd){
    quantidade = qtd;
}

void Invoice::setPrice(float pc){
    preco = pc;
}

void Invoice::setDesc(string ds){
    des = ds;
}

void Invoice::GetInvoice(){
    if(numero !=0){
    printf("%s",des.c_str());
    printf("\nNumero: %d\n",numero);
    printf("Preco: %.2f\n",preco);
    printf("Quantidade: %d\n",quantidade);
}
}

float Invoice::CalculaAmount(){
    if(numero == 0 || preco < 0 || quantidade <= 0){
        return 0;
    }
    float soma = preco*quantidade;
    return soma;
}



