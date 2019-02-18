/***********************
 Materia: Estructuras de datos
 Profesora: Miriam Pescador Rojas
 Descripcion: Implementacion de las funciones definidas en actividad
 **************/

#include "actividad.h"


void Actividad_registrar(Actividad *nuevaActividad){
    printf("Ingrese datos de la actividad: \n");

    printf("Identificador: \n");
    scanf("%d", nuevaActividad->identificador);
    printf("Descripcion: \n");
    scanf("%s", nuevaActividad->descripcion);
    //fecha limite
    //Fecha nuevaFecha;
    //Fecha_registrar(nuevaFecha);
}

void Actividad_mostrar(Actividad actividad){
    printf("============== Datos de la actividad  ================ \n");
    printf("Identificador: %i \n", actividad.identificador);
    printf("Descripcion: %s \n", actividad.descripcion);
    printf("Fecha entrega: %s, %s\n", actividad.fechaLimite.dia, actividad.fechaLimite.hora);
    printf("Porcentaje: %f%%\n",actividad.porcentaje);
}
