/***********************
Materia: Estructuras de datos
Profesora: Miriam Pescador Rojas
Descripcion: Definicion de la estructura estudiante
**************/

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#define SIZE 100

typedef struct  {
    int matricula;
    char nombre[SIZE];
    char apPaterno[SIZE];
    char apMaterno[SIZE];
    Evaluacion evaluaciones[10];
} Estudiante;


void Estudiante_registrar(Estudiante *alumno);
void Estudiante_mostrar(Estudiante alumno);
float Estudiante_calcularPromedio(Estudiante alumno);
#endif
