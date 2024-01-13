// Código de ejemplo para el ejercicio 2
#include <stdio.h>
#include <string.h>
#include <time.h>

// Estructura para representar un libro
struct Libro
{
    char titulo[100];
    char autor[50];
    int anioPublicacion;
};

// Funciones para operar en libros
void inicializarLibro(struct Libro *libro, const char *titulo, const char *autor, int anioPublicacion)
{
    // Implementar la inicialización del libro
    strcpy(libro->titulo, titulo);
    strcpy(libro->autor, autor);
    libro->anioPublicacion = anioPublicacion;
}

void mostrarLibro(const struct Libro *libro)
{
    // Implementar la función para mostrar la información del libro
    printf("El titulo es: %s\n", libro->titulo);
    printf("El autor del libro es: %s\n", libro->autor);
    printf("El anio de salida del libro fue: %d\n", libro->anioPublicacion);
}

int calcularAniosDesdePublicacion(const struct Libro *libro)
{
    // Implementar el cálculo del número de años desde la publicación hasta el año actual
    time_t tiempoActual = time(NULL);
    struct tm *fechaActual = localtime(&tiempoActual);
    int anioActual = fechaActual->tm_year + 1900;
    return anioActual - libro->anioPublicacion;
}

int main()
{
    // Crear instancias de libros
    struct Libro Libro1, Libro2;
    inicializarLibro(&Libro1, "Cien anios de soledad", "Gabriel Garcia Marquez", 1967);
    inicializarLibro(&Libro2, "1984", "GEorge Orwell", 1949);
    // Inicializarlos, mostrar su información y calcular los años desde la publicación
    printf("Libro 1:\n");
    mostrarLibro(&Libro1);

    printf("Libro 2:\n");
    mostrarLibro(&Libro2);

    // Calculo de año de publcacion
    int aniosDesdePublicacion1 = calcularAniosDesdePublicacion(&Libro1);
    int aniosDesdePublicacion2 = calcularAniosDesdePublicacion(&Libro2);

    printf("\nAnios desde la publicacion del Libro 1: %d\n", aniosDesdePublicacion1);
    printf("Anios desde la publicacion del Libro 2: %d\n", aniosDesdePublicacion2);
    

        return 0;
}
