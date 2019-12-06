#include "Voo.h"
#include "Data.h"
#include "Horario.h"

using namespace std;

    Voo::Voo(int numero, Data d, Horario h){
        nVoo = numero;
        dVoo = d;
        hVoo = h;
        for(int i = 0; i < 100 ; i++){
            Vagas[i] = 0;
        }

    }

    int Voo::ProximoLivre(){
        int pvaga;
        for(int i =0;i<100;i++){
            if(Vagas[i] == 0) return i;
        }
    }

    int Voo::getNumero(){
        return nVoo;
    }
    string Voo::getData(){
        return to_string(dVoo.getDia()) + dVoo.GetMesExtenso() + to_string(dVoo.getAno());
    }
    string Voo::getHorario(){
        return to_string(hVoo.getHora()) + ":" + to_string(hVoo.getMinuto())+":"+to_string(hVoo.getSegundo());
    }

    void Voo::Ocupa(int cadeira){
        if(Vagas[cadeira] == 0 ) {
            cout << "Assento marcado!" << endl;
            Vagas[cadeira] = 1;
        }else{
            cout << "Assento ja ocupado!" << endl;
        }
    }

     int Voo::Espacos(){
            int vazio = 0;
         for(int i =0; i<100; i++){
             if(Vagas[i] == 0) vazio++;
         }
        return vazio;
     }

     bool Voo::Verifica(int cadeira){
         if(Vagas[cadeira] == 0) cout << "Cadeira vaga" << endl;
         else cout << "Cadeira ocupada" << endl;
     }