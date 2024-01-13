/*Registro de Contactos: Diseña un programa que gestione un
registro de contactos. Cada contacto debe tener información
como nombre, número de teléfono y dirección. Implementa funciones para añadir,
mostrar y buscar contactos.*/
#include <stdio.h>
#include <string.h>

struct Contacto
{
    char Nombre[100];
    char Direccion[100];
    int NumeroTelefonico;
};

void InicializarContato(struct Contacto *contacto, const char *Nombre, const char *Direccion, int NumeroTelefonico)
{
    strcpy(contacto->Nombre, Nombre);
    strcpy(contacto->Direccion, Direccion);
    contacto->NumeroTelefonico = NumeroTelefonico;
}

void AgregarContato(struct Contacto *contacto)
{

    printf("Por favor, Ingrese el nombre de su contacto: \n");
    scanf("%s", contacto->Nombre);

    printf("Por favor, Ingresa la direccion de su contacto: ");
    scanf("%s,", contacto->Direccion);

    printf("Por favor, Ingresar el numero de su contacto");
    scanf("%d", contacto->NumeroTelefonico);

    while (getchar() != '\n')
        ;
}

void mostrarcontacto(struct Contacto *contacto)
{
    printf("El nombre de tu contacto es: %s\n", contacto->Nombre);
    printf("La direccion de tu contacto es: %s\n", contacto->Direccion);
    printf("El numero de tu contacto es: %d\n", contacto->NumeroTelefonico);
}

// void imprimircontacto(struct Contacto *contactos in){
//     for(int i = 0; i < cantidad; i++){
//         printf("Nombre del contacto %d: %s\n" i + 1,);
//     }
// }
int main()
{
    int SelectorDeEstado;
    while (1)
    {
        printf("Selecciones 1 si quiere buscar un contacto\n");
        printf("Selecciones 2 si quiere agregar un nuevo contacto\n");
        scanf("%s", SelectorDeEstado);
        switch (SelectorDeEstado)
        {
        case 1:

            break;
        case 2:

            break;
        default:
            break;
        }
    }
    return 0;
}