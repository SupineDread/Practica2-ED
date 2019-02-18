/***********************
 Materia: Estructuras de datos
 Profesora: Miriam Pescador Rojas
 Descripcion: Implementacion de las funciones asociadas a la estructura estudiante
 **************/


#include "estudiante.h"
#include <stdio.h>

void Estudiante_registrar(Estudiante *alumno){
    printf("Ingrese datos del estudiante: \n");

    printf("Matricula: \n");
    int variable;
    scanf("%d", &variable);
    alumno->matricula = variable;
    printf("Nombre: \n");
    scanf("%s", alumno->nombre);
    printf("Apellido paterno: \n");
    scanf("%s", alumno->apPaterno);
    printf("Apellido materno: \n");
    scanf("%s", alumno->apMaterno);

}
float Estudiante_calcularPromedio(Estudiante alumno){
    float retorno = 0;
    for(int i = 1;i<=4;i++){
        retorno+=(alumno.evaluaciones[i].calificacion * alumno.evaluaciones[i].actividad.porcentaje)/100.0;
    }
    return retorno;
}
void Estudiante_mostrar(Estudiante alumno){
    printf("============== Datos del estudiante  ================\n");
    printf("Matricula: %d \n", alumno.matricula);
    printf("Nombre: %s %s %s \n", alumno.apPaterno, alumno.apMaterno, alumno.nombre);
    for(int i=0;i<4;i++){

    }
    printf("Promedio: %f",Estudiante_calcularPromedio(alumno));

}
