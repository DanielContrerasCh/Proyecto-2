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
    Carpintero* carpinteros[lim];
    Vendedor* vendedores[lim];
    int numMuebles;
    int numCarpinteros;
    int numVendedores;

public:
    Muebleria(){}
    Muebleria(string nom){
        numMuebles = 0;
        numCarpinteros = 0;
        numVendedores = 0;
        nombre = nom;
    }

    void agregarMueble(float p, float a, string mat, string _tipo, bool colch, int caj, bool ca);
    void agregarMueble(float p, float a, string mat, string _tipo, int _SnumPatas, bool _respaldo);
    void agregarMueble(float p, float a, string mat, string _tipo, int _numPatas, float _ancho, float _largo);
    void agregarEmpleado(string _nombre, int _edad, int muebles, string _tipoMueble);
    void agregarEmpleado(string _nombre, int _edad, int mueblesV);

    string getNombre();
    void mostrarMuebles();
    void mostrarCarpintero();
    void mostrarVendedor();
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
    carpinteros[numCarpinteros] = new Carpintero(_nombre, _edad, muebles, _tipoMueble);
    numCarpinteros++;
}
void Muebleria::agregarEmpleado(string _nombre, int _edad, int mueblesV) {
    vendedores[numVendedores] = new Vendedor( _nombre, _edad, mueblesV);
    numVendedores++;
}

string Muebleria::getNombre() {
    return nombre;
}
/*void Muebleria::mostrarCama() {
    for(int i = 0; i < numCamas; i++){
        cout<<"Cama: "<<i+1<<endl; camas[i]->mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarSilla() {
    for(int i = 0; i < numSillas; i++){
        cout<<"Silla: "<<i+1<<endl; sillas[i]->mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarMesa() {
    for(int i = 0; i < numMesas; i++){
        cout<<"Mesa: "<<i+1<<endl; mesas[i]->mostrarInfo();cout<<endl;
    }
}*/
void Muebleria::mostrarMuebles() {
    for(int i = 0; i <numMuebles; i++){
        cout<<"Mueble: " << endl; muebles[i]->mostrarInfo(); cout<<endl;

    }
}
void Muebleria::mostrarCarpintero() {
    for(int i = 0; i < numCarpinteros; i++){
        cout<<"Carpintero: "<<i+1<<endl; carpinteros[i]->mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarVendedor() {
    for(int i = 0; i < numVendedores; i++){
        cout<<"Vendedor: "<<i+1<<endl; vendedores[i]->mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarEmpleados(){
    mostrarCarpintero();
    mostrarVendedor();
}
#endif //PROYECTO_2_Muebleria_H
