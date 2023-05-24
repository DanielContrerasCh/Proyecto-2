//
// Created by Microsoft Windows 11 on 18/05/2023.
//

#ifndef PROYECTO_2_MUEBLE_H
#define PROYECTO_2_MUEBLE_H

#include <iostream>
#include <string>

using namespace std;

class Mueble {

    private:
        float precio;
        float altura;
        string material;
        string tipo;

    public:
        Mueble();
        Mueble(float p, float a, string mat, string _tipo);
        void setPrecio(float p);
        void setAltura(float a);
        void setMaterial(string mat);
        void setTipo(string _tipo);
        float getPrecio();
        float getAltura();
        string getMaterial();
        string getTipo();
};
Mueble::Mueble(float p, float a, string mat, string _tipo) {
    precio = p;
    altura = a;
    material = mat;
    tipo = _tipo;
}
void Mueble::setPrecio(float p) {
    precio = p;
}
void Mueble::setAltura(float a) {
    altura = a;
}
void Mueble::setMaterial(string mat) {
    material = mat;
}
void Mueble::setTipo(string _tipo) {
    tipo = _tipo;
}
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
        Cama(float p, float a, string mat, string _tipo, bool colch, int caj, bool cab):Mueble(p, a, mat, _tipo){
            colchon = colch;
            cajones = caj;
            cabecera = cab;
        };
        void setColchon(bool colchon);
        void setCajones(int cajones);
        void setCabecera(bool cabecera);
        bool getColchon();
        int getCajones();
        bool getCabecera();
};
/*
Cama::Cama(float p, float a, string mat, string _tipo, bool colch, int caj, bool cab):Mueble(p, a, mat, _tipo){
    colchon = colch;
    cajones = caj;
    cabecera = cab;
};
*/

void Cama::setColchon(bool _colchon) {
    colchon = _colchon ;
}
void Cama::setCajones(int _cajones) {
    cajones = _cajones;
}
void Cama::setCabecera(bool _cabecera) {
    cabecera = _cabecera;
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
        float tamanio;

    public:
        Mesa(float p, float a, string mat, string _tipo, int _numPatas, float _tamanio):Mueble(p, a, mat, _tipo){
            numPatas = _numPatas;
            tamanio = _tamanio;
        }
        void setNumPatas(int _numPatas);
        void setTamanio(float _tamanio);
        int getNumPatas();
        float getTamanio();
};
void Mesa::setNumPatas(int _numPatas){
    numPatas = _numPatas;
};
void Mesa::setTamanio(float _tamanio){
    tamanio = _tamanio;
};
int Mesa::getNumPatas() {
    return numPatas;
}
float Mesa::getTamanio() {
    return tamanio;
}

class Silla : public Mueble{
    private:
        int SnumPatas;
        bool respaldo;

    public:
        Silla(float p, float a, string mat, string _tipo, int _SnumPatas, bool _respaldo): Mueble(p, a, mat, _tipo){
            SnumPatas = _SnumPatas;
            respaldo = _respaldo;
        }
        void setSnumPatas(int _SnumPatas);
        void setRespaldo(bool _respaldo);
        int getSnumPatas();
        bool getRespaldo();
};

void Silla::setSnumPatas(int _SnumPatas) {
    SnumPatas = _SnumPatas;
}
void Silla::setRespaldo(bool _respaldo) {
    respaldo = _respaldo;
}
int Silla::getSnumPatas() {
    return SnumPatas;
}
bool Silla::getRespaldo() {
    return respaldo;
}
#endif //PROYECTO_2_MUEBLE_H
