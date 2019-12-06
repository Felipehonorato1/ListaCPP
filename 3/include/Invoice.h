#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;


class Invoice
{
    public:
        Invoice();
        int quantidade,numero;
        float preco;
        string des;

        void setNum(int num);
        void setQty(int qtd);
        void setPrice(float pc);
        void setDesc(string ds);

        void GetInvoice();

        float CalculaAmount();
};

#endif // INVOICE_H
