
#include "empleado.h"
#include "mueble.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    // Create a carpenter
    Carpintero carpintero = Carpintero("Juan", 20, 10, 1500);

/*    // Set the carpenter's name
    carpintero.setNombre("Pedro");

    // Set the carpenter's age
    carpintero.setEdad(35);*/

    // Get the carpenter's name
    string nombreCarpintero = carpintero.getNombre();

    // Get the carpenter's age
    int edadCarpintero = carpintero.getEdad();

    // Get the carpenter's salary
    int salarioCarpintero = carpintero.salarioC();

    // Print the carpenter's information
    cout << "El carpintero " << nombreCarpintero << " tiene " << edadCarpintero << " años y gana " << salarioCarpintero << " pesos al mes." << endl;

    // Create a seller
    Vendedor vendedor = Vendedor("Susana", 30, 10, 1000);

/*    // Set the seller's name
    vendedor.setNombre("Susana");

    // Set the seller's age
    vendedor.setEdad(30);*/

    // Get the seller's name
    string nombreVendedor = vendedor.getNombre();

    // Get the seller's age
    int edadVendedor = vendedor.getEdad();

    // Get the seller's salary
    int salarioVendedor = vendedor.salarioV();

    // Print the seller's information
    cout << "La vendedora " << nombreVendedor << " tiene " << edadVendedor << " años y gana " << salarioVendedor << " pesos al mes." << endl;

    Cama cama(1000, 100, "madera", "cama", true, 2, true);

    // Print the information of the cama object
    cout << "Cama information:" << endl;
    cout << "Precio: " << cama.getPrecio() << endl;
    cout << "Altura: " << cama.getAltura() << endl;
    cout << "Material: " << cama.getMaterial() << endl;
    cout << "Colchon: " << cama.getColchon() << endl;
    cout << "Cajones: " << cama.getCajones() << endl;
    cout << "Cabecera: " << cama.getCabecera() << endl;

    // Create a new Mesa object
    Mesa mesa(500, 50, "metal", "mesa", 4, 100);

    // Print the information of the mesa object
    cout << endl;
    cout << "Mesa information:" << endl;
    cout << "Precio: " << mesa.getPrecio() << endl;
    cout << "Altura: " << mesa.getAltura() << endl;
    cout << "Material: " << mesa.getMaterial() << endl;
    cout << "NumPatas: " << mesa.getNumPatas() << endl;
    cout << "Tamanio: " << mesa.getTamanio() << endl;

    // Create a new Silla object
    Silla silla(200, 50, "plastico", "silla", 4, true);

    // Print the information of the silla object
    cout << endl;
    cout << "Silla information:" << endl;
    cout << "Precio: " << silla.getPrecio() << endl;
    cout << "Altura: " << silla.getAltura() << endl;
    cout << "Material: " << silla.getMaterial() << endl;
    cout << "SnumPatas: " << silla.getSnumPatas() << endl;
    cout << "Respaldo: " << silla.getRespaldo() << endl;


    return 0;
}