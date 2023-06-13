//
// Created by Microsoft Windows 11 on 18/05/2023.
//

#ifndef PROYECTO_2_EMPLEADO_H
#define PROYECTO_2_EMPLEADO_H

#include <iostream>


using namespace std;

class Empleado {

private:
    string nombre;
    int edad;

public:
    Empleado(){}
    Empleado(string _nombre, int _edad);

    string getNombre();
    int getEdad();
    virtual void mostrarInfo() =0;
};

Empleado::Empleado(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}
void Empleado::mostrarInfo() {}

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
    string tipoMueble;

public:
    Carpintero(){}
    Carpintero(string _nombre, int _edad, int muebles, string _tipoMueble):Empleado(_nombre, _edad) {
        mueblesHechos = muebles;
        tipoMueble = _tipoMueble;
        pagoPorMuebles = 1500;
    }

    int getMueblesHechos();
    string getTipoMueble();
    int salarioC();
    void mostrarInfo();
};

void Carpintero::mostrarInfo() {
    cout << "Nombre: " << getNombre() << endl;
    cout << "Edad: " << getEdad() << endl;
    cout << "Muebles que hace (sillas/camas/mesas): " << getTipoMueble() << endl;
    cout << "Muebles hechos: " << getMueblesHechos() <<endl;
    cout << "Salario: " << salarioC() << endl;
}
int Carpintero::salarioC() {
    int salarioMen = pagoPorMuebles * mueblesHechos;
    return salarioMen;
}


int Carpintero::getMueblesHechos() {
    return mueblesHechos;
}
string Carpintero::getTipoMueble(){
    return tipoMueble;
}
class Vendedor: public Empleado{

private:
    int mueblesVendidos;
    float pagoPorVentas;

public:
    Vendedor(){}
    Vendedor(string _nombre, int _edad, int mueblesV):Empleado(_nombre, _edad){
        mueblesVendidos = mueblesV;
        pagoPorVentas = 1000;
    }
    int getMueblesVendidos();
    int salarioV();
    void mostrarInfo();

};

void Vendedor::mostrarInfo() {
    cout << "Nombre: " << getNombre() << endl;
    cout << "Edad: " << getEdad() << endl;
    cout << "Muebles vendidos: " << getMueblesVendidos() <<endl;
    cout << "Salario: " << salarioV() << endl;
}
int Vendedor::salarioV() {
    float salarioMen = pagoPorVentas * mueblesVendidos;
    return salarioMen;
}
int Vendedor::getMueblesVendidos() {
    return mueblesVendidos;
}
#endif //PROYECTO_2_EMPLEADO_H
