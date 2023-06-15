#include <iostream>
#include <string>
#include "muebleria.h"

using namespace std;


// Aquí es donde empezamos a crear nuestra mueblería y los objetos que tendrá
int main(){

    // Se definen las variables que nos ayudarán para pedir los valores de los parámetros de los objetos
    // Además de variables de tipo booleano que nos servirán en el funcionamiento del menú.
    string nombre, nombreE, tipM, material, eleccion;
    int num, cantMuebles, age, patas, numCajones, eleccion2;
    float price, height, width, length;
    string type;
    bool resp, c, cb, menu2, menu3;
    bool menu = true;

    // Creamos nuestra mueblería
    cout<<"-------------------------------------"<<endl;
    cout<<"|              MENU                 |"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Crea tu muebleria"<<endl;
    cout<<"Nombre de tu muebleria"<<endl;
    getline(cin, nombre);
    Muebleria muebleria(nombre);

    // Inicializamos el menú
    while(menu){
        cout<<"\n\n\n\n"<<endl;
        cout<<"Bienvenido a la muebleria: "<<muebleria.getNombre();
        cout<<"\nEs momento de que introduzcas tus empleados (No puedes tener mas de mil): "<<endl;

        // Creamos los empleados iniciales de la mueblería
        cout<<"¿Cuantos empleados deseas introducir ahora?"<<endl;
        cin>>num;
        cout<<"\n\n\n\n"<<endl;

        // ciclo for para introducir los valores de los atributos de cada empleado
        for(int i=0; i<num;){
            cout<<"Empleado "<<i+1<<":"<<endl;
            cout<<"Tipo (carpintero/vendedor): "<<endl;
            cin>>type;

            // Condición que nos ayuda a distinguir si se crea un empleado tipo carpintero o vendedor
            if(type == "carpintero" || type == "Carpintero"){
                cout<<"Nombre: "<<endl;
                cin>>nombreE;
                cout<<"Edad: "<<endl;
                cin>>age;
                cout<<"Muebles que hace (sillas/mesas/camas): "<<endl;
                cin>>tipM;
                if(tipM == "sillas" || tipM == "mesas" || tipM == "camas"){
                    cout<<"Muebles hechos: "<<endl;
                    cin>>cantMuebles;
                    // Llamamos la función agregarEmpleado para crear el objeto tipo carpintero
                    muebleria.agregarEmpleado(nombreE, age,cantMuebles, tipM);
                    i++;
                }
                else{
                    cout<<"Por favor introduzca una opcion valida"<<endl;
                }
            }
            else if(type == "vendedor" || type =="Vendedor"){
                cout<<"Nombre: "<<endl;
                cin>>nombreE;
                cout<<"Edad: "<<endl;
                cin>>age;
                cout<<"Muebles que ha vendido: "<<endl;
                cin>>cantMuebles;
                // Llamamos la función agregarEmpleado para crear el objeto tipo vendedor
                muebleria.agregarEmpleado(nombreE,age,cantMuebles);
                i++;
            }
            else{
                cout<<"Por favor escriba bien el tipo de empleado que desea agregar"<<endl;

            }
            // Definimos la condición que nos ayuda a pasar del primer menú al segundo
            if(i==num){
                menu=false;
                menu2=true;
            }
        }
    }

    // Inicializamos el segundo menú donde se crearán los primeros muebles
    while(menu2){
        cout<<"Ahora pasemos a crear los muebles que tendrá la muebleria (no pueden ser mas de mil): "<<endl;
        cout<<"¿Cuantos muebles desea introducir en este momento?"<<endl;
        cin>>num;
        cout<<"\n\n\n\n"<<endl;

        // Ciclo for para introducir los valores de los atributos de cada mueble
        for(int i=0;i<num;){
            cout<<"Mueble "<<i+1<<": "<<endl;
            cout<<"Tipo de mueble (silla/mesa/cama):"<<endl;
            cin>>type;

            // Condición que nos ayuda a distinguir si se crea un mueble tipo silla, cama o mesa
            if(type == "silla" || type == "Silla"){
                cout<<"Precio: "<<endl;
                cin>>price;
                cout<<"Altura en metros: "<<endl;
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

                // Llamamos la función agregarMueble para crear el objeto tipo silla
                muebleria.agregarMueble(price, height, material, type, patas, resp);
                i++;
            }
            else if(type == "cama" || type == "Cama"){
                cout<<"Precio: "<<endl;
                cin>>price;
                cout<<"Altura en metros: "<<endl;
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
                cout<<"¿Tiene cabecera? (y/n)"<<endl;
                cin>>eleccion;
                if(eleccion == "y" || eleccion == "Y"){
                    cb = true;
                }
                else if(eleccion == "n" || eleccion == "N"){
                    cb = false;
                }

                // Llamamos la función agregarMueble para crear el objeto tipo cama
                muebleria.agregarMueble(price, height, material, type, c, numCajones, cb);
                i++;
            }
            else if(type == "mesa" || type == "Mesa"){
                cout<<"Precio: "<<endl;
                cin>>price;
                cout<<"Altura en metros: "<<endl;
                cin>>height;
                cout<<"Material: "<<endl;
                cin>>material;
                cout<<"Numero de patas: "<<endl;
                cin>>patas;
                cout<<"Ancho en metros: "<<endl;
                cin>>width;
                cout<<"Largo en metros: "<<endl;
                cin>>length;

                // Llamamos la función agregarMueble para crear el objeto tipo mesa
                muebleria.agregarMueble(price, height, material, type, patas, width, length);
                i++;
            }
            else{
                cout<<"Por favor escriba bien el tipo de mueble que desea agregar"<<endl;

            }

            // Definimos la condición que nos ayuda a pasar del segundo menú al tercero
            if(i==num){
                menu2=false;
                menu3=true;
            }
        }
    }

    // Inicializamos el tercer menú
    while(menu3){
        cout<<"\n\n\n\n"<<endl;

        // Opciones para el usuario
        cout<<"Ahora, ¿Que desea hacer con su muebleria?"<<endl;
        cout<<"\t1) Agregar otro empleado"<<endl;
        cout<<"\t2) Agregar otro mueble"<<endl;
        cout<<"\t3) Mostrar los muebles"<<endl;
        cout<<"\t4) Mostrar los empleados"<<endl;
        cout<<"\t5) Salir"<<endl;
        cin>>eleccion2;

        // Opción para crear más empleados
        if(eleccion2 == 1){
            cout<<"\n\n\n\n"<<endl;
            cout<<"Tipo (carpintero/vendedor): "<<endl;
            cin>>type;

            // Condición que nos ayuda a distinguir si se crea un empleado tipo carpintero o vendedor
            if(type == "carpintero" || type == "Carpintero"){
                cout<<"Nombre: "<<endl;
                cin>>nombreE;
                cout<<"Edad: "<<endl;
                cin>>age;
                cout<<"Muebles que hace: "<<endl;
                cin>>tipM;
                cout<<"Muebles hechos: "<<endl;
                cin>>cantMuebles;

                // Llamamos la función agregarEmpleado para crear el objeto tipo carpintero
                muebleria.agregarEmpleado(nombreE, age,cantMuebles, tipM);
            }
            else if(type == "vendedor" || type =="Vendedor"){
                cout<<"Nombre: "<<endl;
                cin>>nombreE;
                cout<<"Edad: "<<endl;
                cin>>age;
                cout<<"Muebles que ha vendido: "<<endl;
                cin>>cantMuebles;

                // Llamamos la función agregarEmpleado para crear el objeto tipo vendedor
                muebleria.agregarEmpleado(nombreE,age,cantMuebles);
            }
            else{
                cout<<"Por favor escriba bien el tipo de empleado que desea agregar"<<endl;

            }
        }

        // Opción para crear más muebles
        else if(eleccion2 == 2){
            cout<<"\n\n\n\n"<<endl;
            cout<<"Tipo de mueble (silla/mesa/cama):"<<endl;
            cin>>type;

            // Condición que nos ayuda a distinguir si se crea un mueble tipo silla, cama o mesa
            if(type == "silla" || type == "Silla"){
                cout<<"Precio: "<<endl;
                cin>>price;
                cout<<"Altura en metros: "<<endl;
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

                // Llamamos la función agregarMueble para crear el objeto tipo silla
                muebleria.agregarMueble(price, height, material, type, patas, resp);
            }
            else if(type == "cama" || type == "Cama"){
                cout<<"Precio: "<<endl;
                cin>>price;
                cout<<"Altura en metros: "<<endl;
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
                cout<<"¿Tiene cabecera? (y/n)"<<endl;
                cin>>eleccion;
                if(eleccion == "y" || eleccion == "Y"){
                    cb = true;
                }
                else if(eleccion == "n" || eleccion == "N"){
                    cb = false;
                }

                // Llamamos la función agregarMueble para crear el objeto tipo cama
                muebleria.agregarMueble(price, height, material, type, c, numCajones, cb);
            }
            else if(type == "mesa" || type == "Mesa"){
                cout<<"Precio: "<<endl;
                cin>>price;
                cout<<"Altura en metros: "<<endl;
                cin>>height;
                cout<<"Material: "<<endl;
                cin>>material;
                cout<<"Numero de patas: "<<endl;
                cin>>patas;
                cout<<"Ancho: "<<endl;
                cin>>width;
                cout<<"Largo: "<<endl;
                cin>>length;

                // Llamamos la función agregarMueble para crear el objeto tipo mesa
                muebleria.agregarMueble(price, height, material, type, patas, width, length);
            }
            else{
                cout<<"Por favor escriba bien el tipo de mueble que desea agregar"<<endl;

            }
        }

        // Opción que llama a la función mostrarMuebles para mostrar todos los muebles del arreglo
        else if(eleccion2 == 3){
            cout<<"\n\n\n\n"<<endl;
            muebleria.mostrarMuebles();

        }

        // Opción que llama a la función mostrarEmpleados para mostrar todos los empleados del arreglo
        else if (eleccion2 == 4){
            cout<<"\n\n\n\n"<<endl;
            muebleria.mostrarEmpleados();

        }

        // Opción para cerrar el programa
        else if(eleccion2 == 5){
            menu3=false;
        }
        else{
            cout<<"\n\n\n\n"<<endl;
            cout<<"Opcion invalida, por favor elija una opcion valida"<<endl;
        }
    }


    return 0;
}