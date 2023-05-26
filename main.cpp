
#include "empleado.h"
#include "mueble.h"
#include "muebleria.h"
using namespace std;

int main(){
    Muebleria sexomuebleria("si");

    Cama sexocama(1500,2,"madera","cama", true,4, true);
    sexomuebleria.agregarCama(sexocama);
    sexomuebleria.mostrarCama();

    Silla sexosilla(1500,1.5,"plastico", "silla", 4, true);
    sexomuebleria.agregarSilla(sexosilla);
    sexomuebleria.mostrarSilla();

    Mesa sexomesa(1500, 2, "metal", "mesa", 4, 2, 2);
    sexomuebleria.agregarMesa(sexomesa);
    sexomuebleria.mostrarMesa();

    Carpintero sexocarpintero("Juan", 22, 3, 0);
    sexomuebleria.agregarCarpintero(sexocarpintero);
    sexomuebleria.mostrarCarpintero();

    Vendedor sexovendedor("Pepe", 40, 2, 0);
    sexomuebleria.agregarVendedor(sexovendedor);
    sexomuebleria.mostrarVendedor();

    return 0;
}