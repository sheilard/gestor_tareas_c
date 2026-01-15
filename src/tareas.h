
#ifndef GESTOR_TAREAS_C_TAREAS_H
#define GESTOR_TAREAS_C_TAREAS_H


#define MAX_TAREAS 100

typedef struct {
    int id;
    char titulo[100];
} Tarea;

void anadirTarea();
void borrarTarea();
void listarTareas();

#endif //GESTOR_TAREAS_C_TAREAS_H


