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
    Cama camas[lim];
    Silla sillas[lim];
    Mesa mesas[lim];
    Carpintero carpinteros[lim];
    Vendedor vendedores[lim];
    int numCamas;
    int numSillas;
    int numMesas;
    int numCarpinteros;
    int numVendedores;

public:
    Muebleria(){}
    Muebleria(string nom){
        numCamas = 0;
        numSillas = 0;
        numMesas = 0;
        numCarpinteros = 0;
        numVendedores = 0;
        nombre = nom;
    }
    void setNombre(string _nombre);
    void agregarMueble(float p, float a, string mat, string _tipo, bool colch, int caj, bool ca);
    void agregarMueble(float p, float a, string mat, string _tipo, int _SnumPatas, bool _respaldo);
    void agregarMueble(float p, float a, string mat, string _tipo, int _numPatas, float _ancho, float _largo);
    void agregarEmpleado(string _nombre, int _edad, int muebles, string _tipoMueble);
    void agregarEmpleado(string _nombre, int _edad, int mueblesV);

    string getNombre();
    void mostrarCama();
    void mostrarSilla();
    void mostrarMesa();
    void mostrarMuebles();
    void mostrarCarpintero();
    void mostrarVendedor();
    void mostrarEmpleados();
};

void Muebleria::setNombre(string _nombre) {
    nombre = _nombre;
}
void Muebleria::agregarMueble(float p, float a, string mat, string _tipo, bool colch, int caj, bool cab) {
    camas[numCamas] = Cama(p, a, mat, _tipo, colch, caj, cab);
    numCamas++;
}
void Muebleria::agregarMueble(float p, float a, string mat, string _tipo, int _SnumPatas, bool _respaldo) {
    sillas[numSillas] = Silla(p, a, mat, _tipo, _SnumPatas, _respaldo);
    numSillas++;
}
void Muebleria::agregarMueble(float p, float a, string mat, string _tipo, int _numPatas, float _ancho, float _largo) {
    mesas[numMesas] = Mesa(p, a, mat, _tipo, _numPatas, _ancho, _largo);
    numMesas++;
}
void Muebleria::agregarEmpleado(string _nombre, int _edad, int muebles, string _tipoMueble) {
    carpinteros[numCarpinteros] = Carpintero(_nombre, _edad, muebles, _tipoMueble);
    numCarpinteros++;
}
void Muebleria::agregarEmpleado(string _nombre, int _edad, int mueblesV) {
    vendedores[numVendedores] = Vendedor( _nombre, _edad, mueblesV);
    numVendedores++;
}

string Muebleria::getNombre() {
    return nombre;
}
void Muebleria::mostrarCama() {
    for(int i = 0; i < numCamas; i++){
        cout<<"Cama: "<<i+1<<endl; camas[i].mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarSilla() {
    for(int i = 0; i < numSillas; i++){
        cout<<"Silla: "<<i+1<<endl; sillas[i].mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarMesa() {
    for(int i = 0; i < numMesas; i++){
        cout<<"Mesa: "<<i+1<<endl; mesas[i].mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarMuebles() {
    mostrarSilla();
    mostrarCama();
    mostrarMesa();
}
void Muebleria::mostrarCarpintero() {
    for(int i = 0; i < numCarpinteros; i++){
        cout<<"Carpintero: "<<i+1<<endl; carpinteros[i].mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarVendedor() {
    for(int i = 0; i < numVendedores; i++){
        cout<<"Vendedor: "<<i+1<<endl; vendedores[i].mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarEmpleados(){
    mostrarCarpintero();
    mostrarVendedor();
}
#endif //PROYECTO_2_Muebleria_H
