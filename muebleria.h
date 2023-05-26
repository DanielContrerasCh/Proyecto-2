//
// Created by Microsoft Windows 11 on 18/05/2023.
//

#ifndef PROYECTO_2_Muebleria_H
#define PROYECTO_2_Muebleria_H

#include <iostream>
#include <string>
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
/*    ~Muebleria();*/
    void agregarCama(Cama cama);
    void agregarSilla(Silla silla);
    void agregarMesa(Mesa mesa);
    void agregarCarpintero(Carpintero carpintero);
    void agregarVendedor(Vendedor vendedor);

    void mostrarCama();
    void mostrarSilla();
    void mostrarMesa();
    void mostrarCarpintero();
    void mostrarVendedor();
};

void Muebleria::agregarCama(Cama cama) {
    camas[numCamas] = Cama(cama);
    numCamas++;
}
void Muebleria::agregarSilla(Silla silla) {
    sillas[numSillas] = Silla(silla);
    numSillas++;
}
void Muebleria::agregarMesa(Mesa mesa) {
    mesas[numMesas] = Mesa(mesa);
    numMesas++;
}
void Muebleria::agregarCarpintero(Carpintero carpintero) {
    carpinteros[numCarpinteros] = Carpintero(carpintero);
    numCarpinteros++;
}
void Muebleria::agregarVendedor(Vendedor vendedor) {
    vendedores[numVendedores] = Vendedor(vendedor);
    numVendedores++;
}
void Muebleria::mostrarCama() {
    for(int i = 0; i < numCamas; i++){
        cout<<"Cama: "<<endl; camas[i].mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarSilla() {
    for(int i = 0; i < numSillas; i++){
        cout<<"Silla: "<<endl; sillas[i].mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarMesa() {
    for(int i = 0; i < numMesas; i++){
        cout<<"Mesa: "<<endl; mesas[i].mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarCarpintero() {
    for(int i = 0; i < numCarpinteros; i++){
        cout<<"Carpintero: "<<endl; carpinteros[i].mostrarInfo();cout<<endl;
    }
}
void Muebleria::mostrarVendedor() {
    for(int i = 0; i < numVendedores; i++){
        cout<<"Vendedor: "<<endl; vendedores[i].mostrarInfo();cout<<endl;
    }
}
#endif //PROYECTO_2_Muebleria_H
