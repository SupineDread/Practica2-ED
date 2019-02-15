/***********************
 Materia: Estructuras de datos
 Profesora: Miriam Pescador Rojas
 Descripcion: Definicion de la estructura grupo
 **************/

#ifndef _GRUPO_H
#define _GRUPO_H

#include "common.h"
#include "estudiante.h"
#include "actividad.h"

static const char *tipoHorario[]  = { "teoria  ", "practica", "asesoria"};

typedef struct  {
    char tipo[TAM]; // teoria, practica o asesoria
    char dia[TAM];
    char hora[TAM];
} Horario;

typedef struct P2_Grupo{
    char identificador[TAM];
    int inscritos, aprobados, reprobados;
    float promedio;
    char materia[SIZE];
    Horario horarioGrupo[4];
    Estudiante listaEstudiantes[30];
} Grupo;



void Crear_grupo(Grupo *grupo);
void Grupo_registrar(Grupo *grupo);
void Grupo_mostar(Grupo grupo);
void Grupo_mostarEstudiantes(Grupo grupo);
void Grupo_registrarEstudiante(Grupo *grupo, Estudiante *alumno);
void Grupo_calcularPromedio(Grupo *grupo);
#endif
