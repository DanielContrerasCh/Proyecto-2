#ifndef PROYECTO_2_MUEBLE_H
#define PROYECTO_2_MUEBLE_H

#include <iostream>

using namespace std;

/* Esta clase abstracta define el objeto padre Mueble, que tendrá tres clases hijas: Silla, Mesa y Cama
Esta clase tiene 4 atributos que tendrá cualquier clase hija: precio, altura, material y tipo.

Además, los métodos que componen a la clase son los que nos ayudan a acceder a dichos atributos.
También tendrá un método virtual que será usado en las clases hijas con polimorfismo (mostrarInfo)
*/
class Mueble {

private: // Atributos
    float precio;
    float altura;
    string material;
    string tipo;

public: // Métodos
    Mueble(){} // Constructor por default

    // Constructor
    Mueble(float p, float a, string mat, string _tipo);
    float getPrecio();
    float getAltura();
    string getMaterial();
    string getTipo();
    virtual void mostrarInfo()=0;
};

// Definimos constructor
Mueble::Mueble(float p, float a, string mat, string _tipo) {
    precio = p;
    altura = a;
    material = mat;
    tipo = _tipo;
}


//  Getter para la altura del mueble
// @param
// @return altura en tipo float
float Mueble::getAltura() {
    return altura;
}

// Getter para el precio del mueble
// @param
// @return precio en tipo float
float Mueble::getPrecio() {
    return precio;
}

// Getter para el material del mueble
// @param
// @return material en tipo string
string Mueble::getMaterial() {
    return material;
}

// Getter para el tipo del mueble
// @param
// @return tipo en string
string Mueble::getTipo() {
    return tipo;
}


/* Clase hija Cama
   Esta clase tiene como atributos: colcon, cajones y cabecera

   Los métodos que la componen son los getters para acceder a sus atributos y mostrarInfo que
   fue heredado de la clase padre
*/
class Cama : public Mueble{

private: // Atributos
    bool colchon;
    int cajones;
    bool cabecera;

public: // Métodos
    Cama():Mueble(){} // Constructor por defecto

    // Constructor
    Cama(float p, float a, string mat, string _tipo, bool colch, int caj, bool cab):Mueble(p, a, mat, _tipo){
        colchon = colch;
        cajones = caj;
        cabecera = cab;
    };
    bool getColchon();
    int getCajones();
    bool getCabecera();
    void mostrarInfo();
};

// Método para el polimorfismo heredado de la clase padre, No recibe ningún parámetro y muestra la
// información de la cama.
void Cama::mostrarInfo() {
    cout<< getTipo() << endl;
    cout << "Precio: " << getPrecio() << endl;
    cout << "Altura: " << getAltura() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Colchon: " << getColchon() << endl;
    cout << "Cajones: " << getCajones() << endl;
    cout << "Cabecera: " << getCabecera() << endl;

}

// Getters
bool Cama::getColchon() {
    return colchon;
}
int Cama::getCajones() {
    return cajones;
}
bool Cama::getCabecera() {
    return cabecera;{}
}


/* Clase hija Mesa
   Esta clase tiene como atributos: numPatas, ancho y largo

   Los métodos que la componen son los getters para acceder a sus atributos y mostrarInfo que
   fue heredado de la clase padre
*/
class Mesa : public Mueble{

private:
    int numPatas;
    float ancho;
    float largo;

public:
    Mesa():Mueble(){}
    Mesa(float p, float a, string mat, string _tipo, int _numPatas, float _ancho, float _largo):Mueble(p, a, mat, _tipo){
        numPatas = _numPatas;
        ancho = _ancho;
        largo = _largo;
    }
    int getNumPatas();
    void getTamanio();
    void mostrarInfo();
};

// Método para el polimorfismo heredado de la clase padre, No recibe ningún parámetro y muestra la
// información de la mesa.
void Mesa::mostrarInfo() {
    cout<< getTipo() << endl;
    cout << "Precio: " << getPrecio() << endl;
    cout << "Altura: " << getAltura() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Patas: " << getNumPatas() << endl;
    cout << "Tamanio: "; getTamanio(); cout << endl;
}

// Getters
int Mesa::getNumPatas() {
    return numPatas;
}
void Mesa::getTamanio() {
    cout << ancho << "m x " << largo << "m" << endl;
}


/* Clase hija Silla
   Esta clase tiene como atributos: SnumPatas y respaldo

   Los métodos que la componen son los getters para acceder a sus atributos y mostrarInfo que
   fue heredado de la clase padre
*/
class Silla : public Mueble{
private:
    int SnumPatas;
    bool respaldo;

public:
    Silla():Mueble(){}
    Silla(float p, float a, string mat, string _tipo, int _SnumPatas, bool _respaldo): Mueble(p, a, mat, _tipo){
        SnumPatas = _SnumPatas;
        respaldo = _respaldo;
    }
    int getSnumPatas();
    bool getRespaldo();
    void mostrarInfo();
};

// Método para el polimorfismo heredado de la clase padre, No recibe ningún parámetro y muestra la
// información de la silla.
void Silla::mostrarInfo() {
    cout<< getTipo() << endl;
    cout << "Precio: " << getPrecio() << endl;
    cout << "Altura: " << getAltura() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Patas: " << getSnumPatas() << endl;
    cout << "Respaldo: " << getRespaldo() << endl;
}

// Getters
int Silla::getSnumPatas() {
    return SnumPatas;
}
bool Silla::getRespaldo() {
    return respaldo;
}
#endif //PROYECTO_2_MUEBLE_H
