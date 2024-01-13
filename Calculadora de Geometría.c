/*Código de ejemplo para el ejercicio 1 para Poo
Calcular la area de 3 figuras geometricas*/ 


#include <stdio.h>

// Estructura para representar una figura geométrica
struct Figura {
    // Definir los campos necesarios para el cálculo del área
    float Radio;
    float Base;
    float Altura;
};

// Funciones para calcular el área de diferentes figuras
float calcularAreaCuadrado(struct Figura *cuadrado) {
    // Implementar el cálculo del área del cuadrado
    return cuadrado->Altura * cuadrado->Base;
}

float calcularAreaCirculo(struct Figura *circulo) {
    float pi = 3.141592653589793238462643383279502884197169399;
    return pi * circulo->Radio *  circulo->Radio; 
    

}

float calcularAreaTriangulo(struct Figura *triangulo) {
    return triangulo->Base * triangulo->Altura;
}

int main() {
    // Crear instancias de diferentes figuras
    // 1.Radio 2.Base 3.Altura 
    struct Figura cuadrado = {0,5,5};
    struct Figura circulo =  {5,0,3};
    struct Figura triangulo = {0,5,3};
    // Inicializarlas y calcular sus áreas
    float AreaCuadrado = calcularAreaCuadrado(&cuadrado);
    float AreaCirculo = calcularAreaCirculo(&circulo);
    float AreaTriangulo = calcularAreaTriangulo(&triangulo);
    // Mostrar los resultados
    printf("La area de un cuadrado es: %.2f\n",AreaCuadrado);
    printf("La area de un circulo es de: %.2f\n", AreaCirculo);
    printf("La area de un triangulo es: %.2f\n", AreaTriangulo);

    return 0;
}
