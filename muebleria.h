//
// Created by Microsoft Windows 11 on 18/05/2023.
//

#ifndef PROYECTO_2_Muebleria_H
#define PROYECTO_2_Muebleria_H

#include <iostream>
#include <string>
#include "mueble.h"
#include "empleado.h"


class Muebleria {

private:
    // Array of Mueble objects.
    Mueble* muebles;
    // Array of Empleado objects.
    Empleado* empleados;
    // The number of muebles in the array.
    int numMuebles;
    // The number of empleados in the array.
    int numEmpleados;

public:
    Muebleria();
    ~Muebleria();
    void agregarMueble(Mueble* mueble);
    void agregarEmpleado(Empleado* empleado);
    void buscarMueble(string tipo);
    void mostrarMuebles();
    void mostrarEmpleados();
};

Muebleria::Muebleria() {
    numMuebles = 0;
    numEmpleados = 0;
}

Muebleria::~Muebleria() {
    delete[] muebles;
    delete[] empleados;
}

void Muebleria::agregarMueble(Mueble* mueble) {

    muebles[numMuebles++] = *mueble;
}

void Muebleria::agregarEmpleado(Empleado* empleado) {

    empleados[numEmpleados++] = *empleado;
}

void Muebleria::buscarMueble(string tipo) {
    for (int i = 0; i < numMuebles; i++) {
        if (muebles[i].getTipo() == tipo) {
            cout << muebles[i] << endl;
        }
    }
}

void Muebleria::mostrarMuebles() {
    for (int i = 0; i < numMuebles; i++) {
        cout << muebles[i] << endl;
    }
}

void Muebleria::mostrarEmpleados() {
    for (int i = 0; i < numEmpleados; i++) {
        cout << empleados[i] << endl;
    }
}

#endif //PROYECTO_2_Muebleria_H
