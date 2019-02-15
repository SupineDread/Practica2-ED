/***********************
 Materia: Estructuras de datos
 Profesora: Miriam Pescador Rojas
 Descripcion: Implementaci—n de las funciones definidas en la estructura grupo
 **************/
#include "grupo.h"
#include <string.h>

void Grupo_registrar(Grupo *grupo){
    printf("Ingrese datos del grupo: \n");
    grupo->inscritos = 0;

    printf("Identificador: \n");
    scanf("%s", grupo->identificador);
    printf("Materia: \n");
    scanf("%s", grupo->materia);
    //Grupo_registrarHorario(grupo->horarioGrupo);

}

void Grupo_calcularPromedio(Grupo *grupo){
    grupo->reprobados = 0;
    grupo->aprobados = 0;
    grupo->promedio = 0;
    for(int i = 0;i<grupo->inscritos;i++){
        float promedioAlumno = Estudiante_calculaPromedio(grupo->listaEstudiantes[i]);
        grupo->promedio+=promedioAlumno;
        if(promedioAlumno>=6.0)grupo->aprobados++;
        else grupo->reprobados++;
    }
    grupo->promedio/=grupo->inscritos;
}

void Grupo_mostar(Grupo *grupo){
    int i;
    printf("============== Datos del grupo  ================ \n");
    printf("Identificador: %s \n", grupo->identificador);
    printf("Numero de estudiantes inscritos: %d \n", grupo->inscritos);
    printf("Materia: %s\n", grupo->materia);
    printf("Horario: \n tipo \t\t dia \t\t hora \n");
    for(i= 0; i < 4; i++){
        printf("%s \t\t %s \t\t %s \n", grupo->horarioGrupo[i].tipo, grupo->horarioGrupo[i].dia, grupo->horarioGrupo[i].hora);
    }
    Grupo_calcularPromedio(grupo);
    printf("Promedio General: %f",grupo->promedio);
    printf("Numero de aprobados: %d",grupo->aprobados);
    printf("Numero de reprobados: %d",grupo->reprobados);

}

void Grupo_mostarEstudiantes(Grupo grupo){
    int i;
    for(i = 0; i< grupo.inscritos; i++){
        Estudiante_mostrar(grupo.listaEstudiantes[i]);
    }
}


void Grupo_registrarEstudiante(Grupo *grupo, Estudiante *alumno){
    grupo->listaEstudiantes[grupo->inscritos] = *alumno;
    grupo->inscritos++;
}
void Crear_grupo(Grupo *grupo,)
/*void Grupo_buscarEstudiante(Grupo *grupo, int boleta){
    int i;
    //for()
}*/
