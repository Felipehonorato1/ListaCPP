#include "Horario.h"
#include <iostream>

using namespace std;
    
    
    Horario::Horario(){
        hora = 00;
        minuto = 00;
        segundo = 00;
    }
    Horario::Horario(int h,int m,int s){
        if(h>=0 && h<60 && m>=0 && m<60 && s>=0 && s<60){
            hora = h;
            minuto = m;
            segundo = s;
        } else{
            hora = 00;
            minuto = 00;
            segundo = 00;
        }
    }

    void Horario::setHora(int h){
        if(h>=0 && h<60)  hora = h;
        else{
            hora = 00;
            minuto = 00;
            segundo = 00;
        }

    }

    void Horario::setMinuto(int m){
        if(m >=0 && m<60) minuto = m;
        else{
            hora = 00;
            minuto = 00;
            segundo = 00;
        }
    }
    void Horario::setSegundo(int s){
        if(s>=0 && s<60) segundo = s;
        else{
            hora = 00;
            minuto = 00;
            segundo = 00;
        }
    }

    int Horario::getHora(){
        return hora;
    }
    int Horario::getMinuto(){
        return minuto;
    }
    int Horario::getSegundo(){
        return segundo;
    }

    void Horario::AvancarSegundo(){
        segundo++;
        if(segundo>=60) {
            segundo = 0;
            minuto++;
            if(minuto>=60){
                minuto = 0;
                hora++;
            }
        }
    }