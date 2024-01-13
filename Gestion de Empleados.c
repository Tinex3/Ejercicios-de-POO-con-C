/*Gestión de Empleados: Define una estructura para representar a
un empleado con campos como nombre, salario y antigüedad. Implementa
funciones para calcular el salario anual y mostrar la información del empleado.
*/
#include <stdio.h>
#include <string.h>
#include <time.h>

struct Empleado
{
    char Nombre[100];
    int Salario;
    int Antiguedad;
};

void inicializarEmpleado(struct Empleado *empleado, const char *Nombre, int Salario, int Antiguedad)
{
    strcpy(empleado->Nombre, Nombre);
    empleado->Salario = Salario;
    empleado->Antiguedad = Antiguedad;
}

void MostrarEmpleado(struct Empleado *empleado)
{
    printf("El nombre el empleado es: %s\n ", empleado->Nombre);
    printf("El salario del empleado es:  %d\n", empleado->Salario);
    printf("La antiguedad del empleado es: %d\n", empleado->Antiguedad);
}

void SalarioAnual(struct Empleado *empleado)
{
    int salarioAnual = empleado->Salario * 12;
    printf("El salario anual es de: %d\n", salarioAnual);
}

int main()
{
    struct Empleado empleado1;
    inicializarEmpleado(&empleado1, "Juan Perez", 10000, 12);
    printf("Informacion del empleado: \n");
    MostrarEmpleado(&empleado1);
    SalarioAnual(&empleado1);
    return 0;
}