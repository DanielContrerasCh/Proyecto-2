#include <iostream>
#include <string>
#include <windows.h>
#include "empleado.h"
#include "mueble.h"
#include "muebleria.h"

using namespace std;

int main(){

    string nombre, nombreE, tipM, material, eleccion;
    int num,  cantMuebles, age, patas, numCajones, eleccion2;
    float price, height, width, length;
    string type;
    bool resp, c, cb, menu2, menu3;
    bool menu = true;


    cout<<"-------------------------------------"<<endl;
    cout<<"|              MENU                 |"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Crea tu muebleria"<<endl;
    cout<<"Nombre de tu muebleria"<<endl;
    getline(cin, nombre);
    Muebleria muebleria(nombre);

    while(menu){
        system("cls");
        cout<<"Bienvenido a la muebleria: "<<muebleria.getNombre();
        cout<<"\nEs momento de que introduzcas tus empleados (No puedes tener mas de mil): "<<endl;
        cout<<"¿Cuantos empleados deseas introducir ahora?"<<endl;
        cin>>num;
        system("cls");
        for(int i=0; i<num;){
            cout<<"Empleado "<<i+1<<":"<<endl;
            cout<<"Tipo (carpintero/vendedor): "<<endl;
            cin>>type;
            if(type == "carpintero" || type == "Carpintero"){
                cout<<"Nombre: "<<endl;
                cin>>nombreE;
                cout<<"Edad: "<<endl;
                cin>>age;
                cout<<"Muebles que hace: "<<endl;
                cin>>tipM;
                cout<<"Muebles hechos: "<<endl;
                cin>>cantMuebles;
                muebleria.agregarEmpleado(nombreE, age,cantMuebles, tipM);
                i++;
            }
            else if(type == "vendedor" || type =="Vendedor"){
                cout<<"Nombre: "<<endl;
                cin>>nombreE;
                cout<<"Edad: "<<endl;
                cin>>age;
                cout<<"Muebles que ha vendido: "<<endl;
                cin>>cantMuebles;
                muebleria.agregarEmpleado(nombreE,age,cantMuebles);
                i++;
            }
            else{
                cout<<"Por favor escriba bien el tipo de empleado que desea agregar"<<endl;
                system("pause");
            }
            if(i==num){
                menu=false;
                menu2=true;
            }
        }
    }
    while(menu2){
        cout<<"Ahora pasemos a crear los muebles que tendrá la muebleria (no pueden ser mas de mil): "<<endl;
        cout<<"¿Cuantos muebles desea introducir en este momento?"<<endl;
        cin>>num;
        system("cls");
        for(int i=0;i<num;){
            cout<<"Mueble "<<i+1<<": "<<endl;
            cout<<"Tipo de mueble (silla/mesa/cama):"<<endl;
            cin>>type;
            if(type == "silla" || type == "Silla"){
                cout<<"Precio: "<<endl;
                cin>>price;
                cout<<"Altura: "<<endl;
                cin>>height;
                cout<<"Material: "<<endl;
                cin>>material;
                cout<<"Numero de patas: "<<endl;
                cin>>patas;
                cout<<"¿Tiene respaldo? (y/n)"<<endl;
                cin>>eleccion;
                if(eleccion == "y" || eleccion == "Y"){
                    resp = true;
                }
                else if(eleccion == "n" || eleccion == "N"){
                    resp = false;
                }
                muebleria.agregarMueble(price, height, material, type, patas, resp);
                i++;
            }
            else if(type == "mesa" || "Mesa"){
                cout<<"Precio: "<<endl;
                cin>>price;
                cout<<"Altura: "<<endl;
                cin>>height;
                cout<<"Material: "<<endl;
                cin>>material;
                cout<<"Numero de patas: "<<endl;
                cin>>patas;
                cout<<"Ancho: "<<endl;
                cin>>width;
                cout<<"Largo: "<<endl;
                cin>>length;
                muebleria.agregarMueble(price, height, material, type, patas, width, length);
                i++;
            }
            else if(type == "cama" || type == "Cama"){
                cout<<"Precio: "<<endl;
                cin>>price;
                cout<<"Altura: "<<endl;
                cin>>height;
                cout<<"Material: "<<endl;
                cin>>material;
                cout<<"¿Tiene colchon? (y/n)"<<endl;
                cin>>eleccion;
                if(eleccion == "y" || eleccion == "Y"){
                    c = true;
                }
                else if(eleccion == "n" || eleccion == "N"){
                    c = false;
                }
                cout<<"Numero de cajones"<<endl;
                cin>>numCajones;
                cout<<"¿Tiene cabecera?"<<endl;
                cin>>eleccion;
                if(eleccion == "y" || eleccion == "Y"){
                    cb = true;
                }
                else if(eleccion == "n" || eleccion == "N"){
                    cb = false;
                }
                muebleria.agregarMueble(price, height, material, type, c, numCajones, cb);
                i++;
            }
            else{
                cout<<"Por favor escriba bien el tipo de mueble que desea agregar"<<endl;
                system("pause");
            }
            if(i==num){
                menu2=false;
                menu3=true;
            }
        }
    }
    while(menu3){
        system("cls");
        cout<<"Ahora, ¿Que desea hacer con su muebleria?"<<endl;
        cout<<"\t1) Agregar otro empleado"<<endl;
        cout<<"\t2) Agregar otro mueble"<<endl;
        cout<<"\t3) Mostrar los muebles"<<endl;
        cout<<"\t4) Mostrar los empleados"<<endl;
        cin>>eleccion2;
        if (eleccion2 == 1){
            muebleria.mostrarEmpleados();
        }
        else if(eleccion2 == 2){
            muebleria.mostrarMuebles();
        }
        system("pause");
    }


    return 0;
}