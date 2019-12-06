#include "Data.h"
#include <iostream>

using namespace std;


    Data::Data(){
        dia = 1;
        mes = 1;
        ano = 2019;

    }

    Data::Data(int d,int m,int a){
        dia = d;
        mes = m;
        ano = a;
    }

    void Data::setDia(int d){
        if(dia>0 && dia<31) dia = d;
        else dia = 1;
    }
    void Data::setMes(int m){
        if(mes>0 && mes<=12) mes = m;
        else mes = 1;
    }
    void Data::setAno(int a){
        if (a>0) ano = a;
        else ano = 2019;
    }
    
    int Data::getDia(){
        return dia;
    }
    int Data::getMes(){
        return mes;
    }
    int Data::getAno(){
        return ano;
    }

    bool Data::Compara(Data c){
        if(c.dia == dia && c.mes == mes && c.ano == ano) return 0;
        if(c.ano > ano)  return -1; 
        if(c.ano == ano && c.mes > mes) return -1;
        if(c.ano == ano && c.mes == mes && c.dia > dia) return -1;
        if(c.ano < ano)  return 1; 
        if(c.ano == ano && c.mes < mes) return 1;
        if(c.ano == ano && c.mes == mes && c.dia < dia) return 1;
    }

    string Data::GetMesExtenso(){
        switch(mes){
            case 1:
            return "Janeiro";
            break;

            case 2:
            return "Fevereiro";
            break;

            case 3:
            return "Marco";
            break;

            case 4:
            return "Abril";
            break;

            case 5:
            return "Maio";
            break;

            case 6:
            return "Junho";
            break;

            case 7:
            return "Julho";
            break;

            case 8:
            return "Agosto";
            break;

            case 9:
            return "Setembro";
            break;

            case 10:
            return "Outubro";
            break;

            case 11:
            return "Novembro";
            break;

            case 12:
            return "Dezembro";
            break;

        }
    }

    bool Data::IsBissexto(){
        if(ano % 4 == 0 && ano % 100 != 0) return true;
        else return false;
    }