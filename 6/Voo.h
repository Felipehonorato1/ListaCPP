#ifndef VOO_H
#define VOO_H
#include "Data.h"
#include "Horario.h"

class Voo{
    public:

    Voo(int numero, Data d, Horario h);

    int ProximoLivre(); //ok
    int getNumero(); // ok
    string getData(); // ok 
    string getHorario(); // ok

    void Ocupa(int cadeira); //ok

    bool Verifica(int cadeira); //ok

    int Espacos(); //ok


    private:
    int nVoo;
    Data dVoo;
    Horario hVoo;
    bool Vagas[100];

};

#endif 