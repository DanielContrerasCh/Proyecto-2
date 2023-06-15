#ifndef PROYECTO_2_Muebleria_H
#define PROYECTO_2_Muebleria_H

#include <iostream>

#include "mueble.h"
#include "empleado.h"

// Defino una constante para el tamaño de los arreglos dentro de la clase mueblería
const int lim = 1000;

/* Esta clase tiene el objetivo de organizar todos los objetos creados de tipo Mueble y Empleado
   para guardarlos en sus respectivos arreglos mediante composición.

   Los atributos son aquellos de una mueblería cualquiera, nombre, los arreglos de muebles y empleados y el
   número de empleados y muebles, que servirán como límites de iteración en los bucles for para mostrar
   los objetos

*/
class Muebleria {

private: // Atributos
    string nombre;
    Mueble* muebles[lim];
    Empleado* empleados[lim];
    int numMuebles;
    int numEmpleados;

public: // Métodos
    Muebleria(){} // Constructor por default

    // Constructor
    Muebleria(string nom){
        numMuebles = 0;
        numEmpleados = 0;
        nombre = nom;
    }

    // Métodos para crear los objetos con sobrecarga, de manera que dependiendo del tipo de parámetros que se
    // introduzcan definirán el tipo de objeto que se creará.
    void agregarMueble(float p, float a, string mat, string _tipo, bool colch, int caj, bool ca); // Camas
    void agregarMueble(float p, float a, string mat, string _tipo, int _SnumPatas, bool _respaldo); // Sillas
    void agregarMueble(float p, float a, string mat, string _tipo, int _numPatas, float _ancho, float _largo); // Mesas
    void agregarEmpleado(string _nombre, int _edad, int muebles, string _tipoMueble); // Carpinteros
    void agregarEmpleado(string _nombre, int _edad, int mueblesV); // Vendedores

    string getNombre();
    void mostrarMuebles();
    void mostrarEmpleados();
};


// Método para crear camas
// @param float, float, string, string, bool, int, bool
// @return
void Muebleria::agregarMueble(float p, float a, string mat, string _tipo, bool colch, int caj, bool cab) {
    muebles[numMuebles] = new Cama(p, a, mat, _tipo, colch, caj, cab);
    numMuebles++;
}

// Método para crear sillas
// @param float, float, string, strinng, int, bool
// @return
void Muebleria::agregarMueble(float p, float a, string mat, string _tipo, int _SnumPatas, bool _respaldo) {
    muebles[numMuebles] = new Silla(p, a, mat, _tipo, _SnumPatas, _respaldo);
    numMuebles++;
}

// Método para crear mesas
// @param float, float, string, string, int, float, float
// @return
void Muebleria::agregarMueble(float p, float a, string mat, string _tipo, int _numPatas, float _ancho, float _largo) {
    muebles[numMuebles] = new Mesa(p, a, mat, _tipo, _numPatas, _ancho, _largo);
    numMuebles++;
}

// Método para crear carpinteros
// @param string, int, int, string
// @return
void Muebleria::agregarEmpleado(string _nombre, int _edad, int muebles, string _tipoMueble) {
    empleados[numEmpleados] = new Carpintero(_nombre, _edad, muebles, _tipoMueble);
    numEmpleados++;
}

// Método para crear vendedores
// @param string, int, int
// @return
void Muebleria::agregarEmpleado(string _nombre, int _edad, int mueblesV) {
    empleados[numEmpleados] = new Vendedor( _nombre, _edad, mueblesV);
    numEmpleados++;
}

// Getter para el nombre
string Muebleria::getNombre() {
    return nombre;
}


// Método que muestra los muebles dentro del arreglo
// @param
// @return
void Muebleria::mostrarMuebles() {
    for(int i = 0; i <numMuebles; i++){

        // mediante punteros aplicamos polimorfismo para que dependiendo del tipo de mueble, muestre
        // la información correspondiente.
        cout<<"Mueble: " << endl; muebles[i]->mostrarInfo(); cout<<endl;

    }
}


// Método que muestra los empleados dentro del arreglo
// @param
// @return
void Muebleria::mostrarEmpleados(){
    for(int i = 0; i <numEmpleados; i++){

        // mediante punteros aplicamos polimorfismo para que dependiendo del tipo de empleado, muestre
        // la información correspondiente.
        cout<<"Empleado: " << endl; empleados[i]->mostrarInfo(); cout<<endl;
    }
}
#endif //PROYECTO_2_Muebleria_H
