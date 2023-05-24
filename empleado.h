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
        Empleado();
        Empleado(string nom, int _edad);

        void setNombre(string _nombre);
        void setEdad(int _edad);

        string getNombre();
        int getEdad();
/*        int salario();*/
};

Empleado::Empleado(string nom, int _edad) {
    nombre = nom;
    edad = _edad;
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
        Carpintero(string nom, int _edad, int muebles, int pago):Empleado(nom, _edad) {
            mueblesHechos = muebles;
            pagoPorMuebles = pago;
        }
        int salarioC();
};
/*Carpintero::Carpintero(string nom, int _edad, int muebles, int pago):Empleado(nom, _edad) {
    mueblesHechos = muebles;
    pagoPorMuebles = pago;
}*/

int Carpintero::salarioC() {
    int salarioMen = pagoPorMuebles * mueblesHechos;
    return salarioMen;
}

class Vendedor: public Empleado{

    private:
        int mueblesVendidos;
        int pagoPorVentas;

    public:
        Vendedor(string nom, int _edad, int mueblesV, int pagoV):Empleado(nom, _edad){
            mueblesVendidos = mueblesV;
            pagoPorVentas = pagoV;
        }
        int salarioV();

};
//Vendedor::Vendedor(string nom, int _edad, int mueblesV, int pagoV):Empleado(nom, _edad){
//    mueblesVendidos = mueblesV;
//    pagoPorVentas = pagoV;
//}

int Vendedor::salarioV() {
    int salarioMen = pagoPorVentas * mueblesVendidos;
    return salarioMen;
}
#endif //PROYECTO_2_EMPLEADO_H
