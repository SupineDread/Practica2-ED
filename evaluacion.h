/***********************
 Materia: Estructuras de datos
 Profesora: Miriam Pescador Rojas
 Descripcion: Definicion de la estructura actividad
 **************/

#ifndef _EVALUACION_H
#define _EVALUACION_H

#include "common.h"
#include "actividad.h"

typedef struct  {
    Actividad actividad;
    float calificacion;
    char observaciones[SIZE];
} Evaluacion;
void Evaluacion_registrar(Evaluacion *nuevaEvaluacion);
void Evaluacion_imprimir(Evaluacion *evaluacion);
#endif
