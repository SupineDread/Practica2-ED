/***********************
Materia: Estructuras de datos
Profesora: Miriam Pescador Rojas
Descripcion: Implementacion de datos comunes a todos los archivos
**************/
#include <stdio.h>
#include "common.h"



void Fecha_registrar(Fecha *nuevaFecha){
    int value, i;

    printf("Ingrese datos de la nueva fecha: \n");

    printf("seleccione dia: \n");
    for(i = 0; i < 7; i++){
        printf( "%s : press %d\n", dias[i], i);
    }
    scanf("%d", &value);
    //strcpy(nuevaFecha.hora, dias[value]);
    //strcpy(nuevaFecha.hora, "lunes");
    printf("ingrese hora en formato 00:00: \n");
    //scanf("%s", nuevaFecha.hora);
}
