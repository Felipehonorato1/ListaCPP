#ifndef DATA_H
#define DATA_H
#include <iostream>

using namespace std;


class Data{
    public:

    Data();
    Data(int d,int m,int a);

    void setDia(int d);
    void setMes(int m);
    void setAno(int a);

    int getDia();
    int getMes();
    int getAno();

    bool Compara(Data c);

    string GetMesExtenso();

    bool IsBissexto();


    private:
    int dia,mes,ano;

};




#endif