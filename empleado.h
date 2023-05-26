//
// Created by Microsoft Windows 11 on 18/05/2023.
//

#ifndef PROYECTO_2_EMPLEADO_H
#define PROYECTO_2_EMPLEADO_H

#include <iostream>
#include <string>

using namespace std;

class Empleado {

private:
    string nombre;
    int edad;

public:
    Empleado(){}
    Empleado(string nom, int _edad);

    void setNombre(string _nombre);
    void setEdad(int _edad);

    string getNombre();
    int getEdad();
    void mostrarInfo();
};

Empleado::Empleado(string nom, int _edad) {
    nombre = nom;
    edad = _edad;
}
void Empleado::mostrarInfo() {
    cout << "Nombre: " << getNombre() << endl;
    cout << "Edad: " << getEdad() << endl;
}
void Empleado::setNombre(string _nombre) {
    nombre = _nombre;
}
void Empleado::setEdad(int _edad) {
    edad = _edad;
}
string Empleado::getNombre() {
    return nombre;
}
int Empleado::getEdad() {
    return edad;
}

class Carpintero : public Empleado{

private:
    int mueblesHechos;
    int pagoPorMuebles;

public:
    Carpintero(){}
    Carpintero(string nom, int _edad, int muebles, int _pagoPorMuebles):Empleado(nom, _edad) {
        mueblesHechos = muebles;
        pagoPorMuebles = 1500;
    }
    void setMueblesHechos(int muebles);
    int getMueblesHechos();
    int salarioC();
    void mostrarInfo();
};

void Carpintero::mostrarInfo() {
    cout << "Nombre: " << getNombre() << endl;
    cout << "Edad: " << getEdad() << endl;
    cout << "Muebles hechos: " << getMueblesHechos() <<endl;
    cout << "Salario: " << salarioC() << endl;
}
int Carpintero::salarioC() {
    int salarioMen = pagoPorMuebles * mueblesHechos;
    return salarioMen;
}
void Carpintero::setMueblesHechos(int _muebles) {
    mueblesHechos = _muebles;
}
int Carpintero::getMueblesHechos() {
    return mueblesHechos;
}

class Vendedor: public Empleado{

private:
    int mueblesVendidos;
    int pagoPorVentas;

public:
    Vendedor(){}
    Vendedor(string nom, int _edad, int mueblesV, int _pagoPorVentas):Empleado(nom, _edad){
        mueblesVendidos = mueblesV;
        pagoPorVentas = 1000;
    }
    void setMueblesVendidos(int muebles);
    int getMueblesVendidos();
    int salarioV();
    void mostrarInfo();

};

void Vendedor::mostrarInfo() {
    cout << "Nombre: " << getNombre() << endl;
    cout << "Edad: " << getEdad() << endl;
    cout << "Muebles Vendidos: " << getMueblesVendidos() << endl;
    cout << "salario: " << salarioV() << endl;
}
int Vendedor::salarioV() {
    int salarioMen = pagoPorVentas * mueblesVendidos;
    return salarioMen;
}
void Vendedor::setMueblesVendidos(int _muebles) {
    mueblesVendidos = _muebles;
}
int Vendedor::getMueblesVendidos() {
    return mueblesVendidos;
}
#endif //PROYECTO_2_EMPLEADO_H
