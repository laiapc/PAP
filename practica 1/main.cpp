#include <iostream>
#include <cstdlib>
#include "fecha.h"
#include "comprobaciones.h"

using namespace std;

int main() {
    fecha f, f1;
    comprobaciones c;
    string aux;
    string cadena = "12-10-16";
    //validar(f,cadena);
    aux = cadena.substr(0,2);
    cout << aux;
    int i = atoi(aux.c_str());
    cout << i;
    return 0;
}