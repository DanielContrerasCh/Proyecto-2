# Proyecto-2 - Daniel Contreras Chávez - A01710608

## Mueblería

### Contexto
Este proyecto tiene como objetivo ayudar a una mueblería a mantener un orden de su inventario de manera más eficiente. Además, también será de ayuda para revisar los registros de sus empleados, el rendimiento individual de cada uno y sus salarios, pues el salario entre carpinteros está basado en cuántos muebles han construido y el de los vendedores en cuántos muebles han vendido.

### Funcionalidad
Se espera que el código pueda llevar un registro eficiente del inventario de la mueblería, por lo que se podrán agregar muebles, cada uno con sus características propias. Además, también podrá mostrar los muebles en el inventario y los empleados en la nómina. En cuanto a los empleados, el proyecto podrá registrar las actividades de los empleados, como ventas realizadas y muebles construidos.

### Casos que harían que el programa dejara de funcionar
- Los empleados tendrán solo un rol, es decir, no pueden ser carpinteros y vendedores.
- Que introduzcan tipos de valores incorrectos (Por ejemplo, Que en un input que debería ser int, introduzcan un string)
- Que escriban mal el tipo de mueble (que pongan una mayúscula o que la omitan).
- Que registren valores negativos (número de muebles negativos o salario negativo, etc.)
- Que se intente crear un objeto tipo empleado o tipo mueble, pues son clases abstractas.

### Consideraciones
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con: "g++ main.cpp"

correr en linux: "/a.out"

correr en windows: "a.exe"
