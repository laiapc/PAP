//
// Created by Laia on 06/11/2016.
//

#include "comprobaciones.h"

string comprobaciones::quitarespacios (string cadena){
    string resultado;
    for(int i = 0; i<cadena.size();++i)
    {
        if(cadena[i]!= ' ')
        {
            resultado += cadena[i];
        }
    }
    return resultado;
};