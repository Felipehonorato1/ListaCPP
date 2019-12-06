#ifndef HORARIO_H
#define HORARIO_H

class Horario{
    public:
    Horario();
    Horario(int h,int m,int s);

    void setHora(int h);
    void setMinuto(int m);
    void setSegundo(int s);

    int getHora();
    int getMinuto();
    int getSegundo();

    void AvancarSegundo();

    private:
    int hora,minuto,segundo;




};




#endif