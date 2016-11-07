//
// Created by Laia on 02/11/2016.
//

#include <cstdlib>
#include "fecha.h"
#include <iostream>

using  namespace std;

void inicia (fecha &f, int d, int m, int a, int h, int mn, int s){
    f.dia = d;
    f.mes = m;
    f.anyo = a;
    f.hora = h;
    f.min = mn;
    f.seg = s;
};
bool menor_que(fecha &f1, fecha &f2){
    if (f1.anyo < f2.anyo){
        return true;
    }else if(f1.anyo > f2.anyo){
        return false;
    }
    //mismo año
    if(f1.mes < f2.mes){
        return true;
    }else if(f1.mes > f2.mes) {
        return false;
    }
    //mismo mes
    if(f1.dia < f2.dia){
        return true;
    }else if(f1.dia > f2.dia) {
        return false;
    }
    //mismo día
    if(f1.hora < f2.hora){
        return true;
    }else if(f1.hora > f2.hora) {
        return false;
    }
    //misma hora
    if(f1.min < f2.min){
        return true;
    }else if(f1.min > f2.min) {
        return false;
    }
    //mismo minuto
    if(f1.seg < f2.seg){
        return true;
    }else if(f1.seg > f2.seg) {
        return false;
    }
};
void validar(fecha &f, string fe){
    /*
    //el formato de la fecha es dd-mm-aahh:mm:ss.sssss
    fecha resultado;
    string aux;
    aux = fe.substr(0,2);
    long int dia = strtol(aux);
    cout << dia;
    //resultado.dia = dia;
     */
};