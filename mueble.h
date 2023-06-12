//
// Created by Microsoft Windows 11 on 18/05/2023.
//

#ifndef PROYECTO_2_MUEBLE_H
#define PROYECTO_2_MUEBLE_H

#include <iostream>


using namespace std;

class Mueble {

private:
    float precio;
    float altura;
    string material;
    string tipo;

public:
    Mueble(){}
    Mueble(float p, float a, string mat, string _tipo);
    float getPrecio();
    float getAltura();
    string getMaterial();
    string getTipo();
    virtual void mostrarInfo()=0;
};
Mueble::Mueble(float p, float a, string mat, string _tipo) {
    precio = p;
    altura = a;
    material = mat;
    tipo = _tipo;
}
void Mueble::mostrarInfo() {}

float Mueble::getAltura() {
    return altura;
}
float Mueble::getPrecio() {
    return precio;
}
string Mueble::getMaterial() {
    return material;
}
string Mueble::getTipo() {
    return tipo;
}

class Cama : public Mueble{

private:
    bool colchon;
    int cajones;
    bool cabecera;

public:
    //revisar el salto de línea
    Cama():Mueble(){}
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

void Cama::mostrarInfo() {
    cout << "Precio: " << getPrecio() << endl;
    cout << "Altura en cm: " << getAltura() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Colchon: " << getColchon() << endl;
    cout << "Cajones: " << getCajones() << endl;
    cout << "Cabecera: " << getCabecera() << endl;

}
bool Cama::getColchon() {
    return colchon;
}
int Cama::getCajones() {
    return cajones;
}
bool Cama::getCabecera() {
    return cabecera;{}
}

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
void Mesa::mostrarInfo() {
    cout << "Precio: " << getPrecio() << endl;
    cout << "Altura en cm: " << getAltura() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Patas: " << getNumPatas() << endl;
    cout << "Tamanio: "; getTamanio(); cout << endl;
}
int Mesa::getNumPatas() {
    return numPatas;
}
void Mesa::getTamanio() {
    cout << ancho << "m x " << largo << "m" << endl;
}

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
void Silla::mostrarInfo() {
    cout << "Precio: " << getPrecio() << endl;
    cout << "Altura en cm: " << getAltura() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Patas: " << getSnumPatas() << endl;
    cout << "Respaldo: " << getRespaldo() << endl;
}
int Silla::getSnumPatas() {
    return SnumPatas;
}
bool Silla::getRespaldo() {
    return respaldo;
}
#endif //PROYECTO_2_MUEBLE_H
