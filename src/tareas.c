#include <stdio.h>
#include <string.h>
#include "tareas.h"

static Tarea tareas[MAX_TAREAS];
static int numTareas = 0;

void anadirTarea() {
    if (numTareas >= MAX_TAREAS) {
        printf("No se pueden añadir más tareas\n");
        return;
    }
    Tarea t;
    t.id = numTareas + 1;
    printf("Introduce la tarea:\t");
    getchar();
    fgets(t.titulo,100,stdin);
    t.titulo[strcspn(t.titulo,"\n")] = '\0';

    tareas[numTareas] = t;
    numTareas++;
    printf("Tarea añadida.\n");
}

void borrarTarea() {
    Tarea t;
    int encontrado=0;
    printf("Introduce la tarea:\n");
    getchar();
    fgets(t.titulo,100,stdin);
    t.titulo[strcspn(t.titulo,"\t")] = '\0';

    for (int i = 0; i < numTareas; i++) {
        if (strcmp(tareas[i].titulo,t.titulo) == 0) {
            for (int j = i; j < numTareas-1; j++) {
                tareas[j] = tareas[j+1];
            }
            numTareas--;
            encontrado=1;
            printf("Tarea borrada.\n");
            break;
        }
    }

    if (!encontrado) {
        printf("No se encontro la tarea.\n");
    }

}


void listarTareas() {
    if (numTareas == 0) {
        printf("No hay ninguna tarea.\n");
        return;
    }
    for (int i = 0; i < numTareas; i++) {
        printf("%d: %s\n",tareas[i].id,tareas[i].titulo);
    }
}

