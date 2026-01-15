#include <stdio.h>

#include "tareas.h"

int main() {
    int opcion;

    do {
        printf("\n --- GESTOR DE TAREAS ---\n");
        printf("1.Anadir Tarea\n");
        printf("2.Listar Tareas\n");
        printf("3.Borrar Tarea\n");
        printf("4.Salir\n");
        printf("Que opcion quiere?:\t ");
        scanf("%d",&opcion);

        switch (opcion) {
            case 1:
                anadirTarea();
                break;
            case 2:
                listarTareas();
                break;
            case 3:
                borrarTarea();
                break;
            case 4:
                printf("Saliendo del gestor");
                break;
            default:
                printf("Opción no valida");
                break;
        }
    } while(opcion != 4);
    return 0;
}
