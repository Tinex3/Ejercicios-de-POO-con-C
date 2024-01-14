#include <stdio.h>
#include <string.h>

#define MAX_CONTACTOS 100

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

void AgregarContacto(struct Contacto *contactos, int *cantidad)
{
    if (*cantidad < MAX_CONTACTOS)
    {
        printf("Por favor, ingrese el nombre de su contacto: ");
        scanf("%s", contactos[*cantidad].Nombre);

        printf("Por favor, ingrese la direccion de su contacto: ");
        scanf("%s", contactos[*cantidad].Direccion);

        printf("Por favor, ingrese el numero de su contacto: ");
        scanf("%d", &contactos[*cantidad].NumeroTelefonico);

        (*cantidad)++;
    }
    else
    {
        printf("¡Error! Se ha alcanzado el límite de contactos.\n");
    }
}

void MostrarContacto(struct Contacto *contacto)
{
    printf("El nombre de tu contacto es: %s\n", contacto->Nombre);
    printf("La direccion de tu contacto es: %s\n", contacto->Direccion);
    printf("El numero de tu contacto es: %d\n", contacto->NumeroTelefonico);
}

void MostrarTodosLosContactos(struct Contacto *contactos, int cantidad)
{
    printf("Lista de Contactos:\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("Contacto %d:\n", i + 1);
        MostrarContacto(&contactos[i]);
        printf("\n");
    }
}

int main()
{
    struct Contacto contactos[MAX_CONTACTOS];
    int cantidadContactos = 0;
    int SelectorDeEstado = 0;

    while (1)
    {
        printf("Seleccione 1 si desea buscar un contacto\n");
        printf("Seleccione 2 si desea agregar un nuevo contacto\n");
        printf("Seleccione 3 para salir\n");
        scanf("%d", &SelectorDeEstado);

        switch (SelectorDeEstado)
        {
        case 1:
            printf("Elegiste 1\n");
            if (cantidadContactos > 0)
            {
                MostrarTodosLosContactos(contactos, cantidadContactos);
            }
            else
            {
                printf("No hay contactos para mostrar.\n");
            }
            break;

        case 2:
            printf("Elegiste 2\n");
            AgregarContacto(contactos, &cantidadContactos);
            break;

        case 3:
            printf("Saliendo del programa.\n");
            return 0;

        default:
            printf("Opción no válida. Por favor, elija nuevamente.\n");
            break;
        }
    }

    return 0;
}
