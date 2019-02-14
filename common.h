/***********************
Materia: Estructuras de datos
Profesora: Miriam Pescador Rojas
Descripcion: Datos comunes a todos los archivos
**************/
#ifndef _COMMON_H
#define _COMMON_H

#define SIZE 100
#define TAM 10

static const char *dias[]  = { "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
static const char *horarios[] = {"7:00", "8:30", "10:30", "12:00", "13:30", "15:00", "16:30", "18:30", "20:00"};


typedef struct{
    char dia[SIZE];
    char hora[SIZE];
}Fecha;


void Fecha_registrar(Fecha *nuevaFecha);

#endif
