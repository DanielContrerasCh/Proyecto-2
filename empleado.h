#ifndef PROYECTO_2_EMPLEADO_H
#define PROYECTO_2_EMPLEADO_H

#include <iostream>

using namespace std;

/* Esta clase abstracta define el objeto padre Empleado, que tendrá dos clases hijas: Carpintero y Vendedor
Esta clase tiene dos atributos que tendrá cualquier clase hija: Nombre y edad.

Además, los métodos que componen a la clase son los que nos ayudan a acceder a dichos atributos.
También tendrá un método virtual que será usado en las clases hijas con polimorfismo (mostrarInfo)
*/
class Empleado {

private: // Atributos
    string nombre;
    int edad;

public: // Métodos
    Empleado(){} // Constructor por default
    Empleado(string _nombre, int _edad); // Constructor

    // Métodos para obtener los atributos
    string getNombre();
    int getEdad();

    // Método virtual con el que se aplica polimorfismo y se define la clase como abstracta
    virtual void mostrarInfo() =0;
};

// Se define el constructor
Empleado::Empleado(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

// Método para polimorfismo
// @param
// @return
void Empleado::mostrarInfo() {}

// Método para obtener el nombre
// @param
// @return regresa el nombre en un string
string Empleado::getNombre() {
    return nombre;
}

// Método para obtener la edad
// @param
// @return regresa la edad en un int
int Empleado::getEdad() {
    return edad;
}

/* Clase hija Carpintero
   Esta clase tendrá los atributos de cuántos muebles ha hecho, el pago predeterminado por mueble construido y el tipo
   de muebles que hace.

   Los métodos tienen como objetivo obtener información sobre el carpintero, así como uno para calcular el salario
   y el método mostrarInfo que viene de la clase padre.
*/
class Carpintero : public Empleado{

private: // Atributos
    int mueblesHechos;
    int pagoPorMuebles;
    string tipoMueble;

public: // Métodos
    Carpintero(){} // constructor base

    // Constructor
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

// Método para polimorfismo que muestra los atributos de un carpintero
void Carpintero::mostrarInfo() {
    cout << "Nombre: " << getNombre() << endl;
    cout << "Edad: " << getEdad() << endl;
    cout << "Muebles que hace: " << getTipoMueble() << endl;
    cout << "Muebles hechos: " << getMueblesHechos() <<endl;
    cout << "Salario: " << salarioC() << endl;
}

// Método para calcular el salario del carpintero
// @param
// @return Regresa el salario en un int
int Carpintero::salarioC() {
    int salarioMen = pagoPorMuebles * mueblesHechos;
    return salarioMen;
}

// Getters de los atributos
int Carpintero::getMueblesHechos() {
    return mueblesHechos;
}
string Carpintero::getTipoMueble(){
    return tipoMueble;
}

/* Clase hija Vendedor
   Esta clase tendrá los atributos de cuántos muebles ha vendido y el pago predeterminado por mueble vendido.

   Los métodos tienen como objetivo obtener información sobre el vendedor, así como uno para calcular el salario
   y el método mostrarInfo que viene de la clase padre.
*/
class Vendedor: public Empleado{

private: // Atributos
    int mueblesVendidos;
    float pagoPorVentas;

public: // Métodos
    Vendedor(){} // Constructor por default

    // Constructor
    Vendedor(string _nombre, int _edad, int mueblesV):Empleado(_nombre, _edad){
        mueblesVendidos = mueblesV;
        pagoPorVentas = 1000;
    }

    int getMueblesVendidos();
    int salarioV();
    void mostrarInfo();

};


// Método para polimorfismo que muestra los atributos de un vendedor
void Vendedor::mostrarInfo() {
    cout << "Nombre: " << getNombre() << endl;
    cout << "Edad: " << getEdad() << endl;
    cout << "Muebles vendidos: " << getMueblesVendidos() <<endl;
    cout << "Salario: " << salarioV() << endl;
}

// Método para calcular el salario de un vendedor
// @param
// @return Regresa el salario en un int
int Vendedor::salarioV() {
    float salarioMen = pagoPorVentas * mueblesVendidos;
    return salarioMen;
}

// Getter del atributo de los muebles que ha vendido
int Vendedor::getMueblesVendidos() {
    return mueblesVendidos;
}

#endif //PROYECTO_2_EMPLEADO_H
