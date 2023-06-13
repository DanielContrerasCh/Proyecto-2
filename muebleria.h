//
// Created by Microsoft Windows 11 on 18/05/2023.
//

#ifndef PROYECTO_2_Muebleria_H
#define PROYECTO_2_Muebleria_H

#include <iostream>

#include "mueble.h"
#include "empleado.h"

const int lim = 1000;
class Muebleria {

private:
    string nombre;
    Mueble* muebles[lim];
    Empleado* empleados[lim];
    int numMuebles;
    int numEmpleados;

public:
    Muebleria(){}
    Muebleria(string nom){
        numMuebles = 0;
        numEmpleados = 0;
        nombre = nom;
    }

    void agregarMueble(float p, float a, string mat, string _tipo, bool colch, int caj, bool ca);
    void agregarMueble(float p, float a, string mat, string _tipo, int _SnumPatas, bool _respaldo);
    void agregarMueble(float p, float a, string mat, string _tipo, int _numPatas, float _ancho, float _largo);
    void agregarEmpleado(string _nombre, int _edad, int muebles, string _tipoMueble);
    void agregarEmpleado(string _nombre, int _edad, int mueblesV);

    string getNombre();
    void mostrarMuebles();
    void mostrarEmpleados();
};

void Muebleria::agregarMueble(float p, float a, string mat, string _tipo, bool colch, int caj, bool cab) {
    muebles[numMuebles] = new Cama(p, a, mat, _tipo, colch, caj, cab);
    numMuebles++;
}
void Muebleria::agregarMueble(float p, float a, string mat, string _tipo, int _SnumPatas, bool _respaldo) {
    muebles[numMuebles] = new Silla(p, a, mat, _tipo, _SnumPatas, _respaldo);
    numMuebles++;
}
void Muebleria::agregarMueble(float p, float a, string mat, string _tipo, int _numPatas, float _ancho, float _largo) {
    muebles[numMuebles] = new Mesa(p, a, mat, _tipo, _numPatas, _ancho, _largo);
    numMuebles++;
}
void Muebleria::agregarEmpleado(string _nombre, int _edad, int muebles, string _tipoMueble) {
    empleados[numEmpleados] = new Carpintero(_nombre, _edad, muebles, _tipoMueble);
    numEmpleados++;
}
void Muebleria::agregarEmpleado(string _nombre, int _edad, int mueblesV) {
    empleados[numEmpleados] = new Vendedor( _nombre, _edad, mueblesV);
    numEmpleados++;
}

string Muebleria::getNombre() {
    return nombre;
}

void Muebleria::mostrarMuebles() {
    for(int i = 0; i <numMuebles; i++){
        cout<<"Mueble: " << endl; muebles[i]->mostrarInfo(); cout<<endl;

    }
}

void Muebleria::mostrarEmpleados(){
    for(int i = 0; i <numEmpleados; i++){
        cout<<"Mueble: " << endl; empleados[i]->mostrarInfo(); cout<<endl;
}
#endif //PROYECTO_2_Muebleria_H
