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


void Grupo_mostar(Grupo grupo){
    int i;
    printf("============== Datos del grupo  ================ \n");
    printf("Identificador: %s \n", grupo.identificador);
    printf("Numero de estudiantes inscritos: %d \n", grupo.inscritos);
    printf("Materia: %s\n", grupo.materia);
    printf("Horario: \n tipo \t\t dia \t\t hora \n");
    for(i= 0; i < 4; i++){
        printf("%s \t\t %s \t\t %s \n", grupo.horarioGrupo[i].tipo, grupo.horarioGrupo[i].dia, grupo.horarioGrupo[i].hora);
    }
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

/*void Grupo_buscarEstudiante(Grupo *grupo, int boleta){
    int i;
    //for()
}*/
