/***********************
 Materia: Estructuras de datos
 Profesora: Miriam Pescador Rojas
 Descripcion: Implementacion de las funciones definidas en actividad
 **************/

#include "evaluacion.h"


void Evaluacion_registrar(Evaluacion *nuevaEvaluacion){

}

void Evaluacion_imprimir(Evaluacion *evaluacion){
    printf("============== Datos de la evaluación  ================ \n");
    printf("Actividad:\n");
    Actividad_mostrar(evaluacion->actividad);
    printf("Calificacion: %f\n",evaluacion->calificacion);
    printf("Observaciones:\n%s\n",evaluacion->observaciones);
}
