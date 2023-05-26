
#include "empleado.h"
#include "mueble.h"
#include "muebleria.h"

using namespace std;

int main(){

    Muebleria muebleria("si");

    Cama cama(1500,2,"madera","cama", true,4, true);
    muebleria.agregarMueble(cama);
    muebleria.mostrarCama();

    Silla silla(1500,1.5,"plastico", "silla", 4, true);
    muebleria.agregarMueble(silla);
    muebleria.mostrarSilla();

    Mesa mesa(1500, 2, "metal", "mesa", 4, 2, 2);
    muebleria.agregarMueble(mesa);
    muebleria.mostrarMesa();

    Carpintero carpintero("Juan", 22, 3, 0);
    muebleria.agregarEmpleado(carpintero);
    muebleria.mostrarCarpintero();

    Vendedor vendedor("Pepe", 40, 2, 0);
    muebleria.agregarEmpleado(vendedor);
    muebleria.mostrarVendedor();

    return 0;
}