//
// Created by Laia on 02/11/2016.
//

#ifndef PRACTICA_1_FECHA_H
#define PRACTICA_1_FECHA_H

#include <string>

using  namespace std;

struct fecha{
    int dia, mes, anyo, hora, min, seg;
};

void inicia (fecha &f, int d, int m, int a, int h, int mn, int s);
bool menor_que(fecha &f1, fecha &f2);
void validar(fecha &f, string fe);

#endif //PRACTICA_1_FECHA_H