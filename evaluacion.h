/***********************
 Materia: Estructuras de datos
 Profesora: Miriam Pescador Rojas
 Descripcion: Definicion de la estructura actividad
 **************/

#ifndef _EVALUACION_H
#define _EVALUACION_H

#include "common.h"

typedef struct  {
    Actividad actividad;
    float calificacion;
    char Observaciones[SIZE];
} Evaluacion;

void Evaluacion_calificar(Evaluacion *nuevaEvaluacion);
#endif
