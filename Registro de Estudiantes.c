/*Registro de Estudiantes: Define una estructura para representar a un 
estudiante con campos como nombre, edad y calificación. Crea funciones 
para inicializar, mostrar y actualizar la calificación de un estudiante.*/

#include <stdio.h>
#include <string.h>

struct Estudiante
{
    char nombre[100];
    int edad;
    int calificacion;
};
//Se inicializa al estudiante
void InicializarEstudiante(struct Estudiante *estudiante, const char *nombre, int edad, int calificacion){
    strcpy(estudiante->nombre,nombre);
    estudiante->edad = edad;
    estudiante->calificacion = calificacion;
};
//Se imprime quien es el estudiante
void MostrarEstudiante(const struct Estudiante *estudiante){
    printf("El nombre del estudiante es: %s\n", estudiante->nombre);
    printf("La edad del estudiante es: %d\n", estudiante->edad);
    printf("La calificacion del estudiantes es: %d\n", estudiante->calificacion);
}
void ActualCalificacionEstudiante(struct Estudiante *estudiante, int nuevacalificacion){
    estudiante->calificacion = nuevacalificacion;
};

int main(){
    struct Estudiante estudiante1;
    InicializarEstudiante(&estudiante1, "Juan Perez", 20, 85);
    printf("Informacion inicial del estudiante: \n");
    MostrarEstudiante(&estudiante1);
    
    ActualCalificacionEstudiante(&estudiante1,90);
    printf("\nInformacion del estudiante actualizada:\n");
    MostrarEstudiante(&estudiante1);

}