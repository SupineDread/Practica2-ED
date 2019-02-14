/***********************
Materia: Estructuras de datos
Profesora: Miriam Pescador Rojas
Descripcion: Creacion y registro de los tipos de datos
**************/
#include "estudiante.h"
#include "grupo.h"
#include "common.h"
#include "actividad.h"
#include <stdio.h>
#include <string.h>

/*variables globales*/
Estudiante e1 = {373494, "Alberto", "Flores", "Ruiz"};
Estudiante e2;
Actividad a1[] = {{1, "practica1", {"Lunes 5 de febrero", "10:00 am"}}, {2, "practica2",{"Martes 26 de febrero", "10:00 pm"}}, {3, "Examen", "Viernes 1 Marzo", "15:00"}, {4, "proyecto", {"Junio", "12:00"}}}, a2[] = {{1, "practica1", {"Lunes 5 de febrero", "12:00 am"}}, {2, "practica2",{"Martes 26 de febrero", "09:00 pm"}}, {3, "Examen", "Viernes 1 Marzo", "16:00"}, {4, "proyecto", {"Junio", "13:00"}}};
Grupo g1, g2;

void registrarAlumnos();
void registrarGrupos();
void registrarActividades();
void asociarAlumnoGrupo();

int main(){

    registrarAlumnos();
    //getchar();
    registrarGrupos();
    //getchar();
    int selected = -1;
    do{
        printf("Ingrese una opcion:\n1.-Agregar calificaciones\n2.-Calcular promedio por estudiante\n3.-Calcular estadisticas del gruoo\n4.-Salir\n");
        scanf("%d",&selected);
        switch(selected){
        case 4:
                return 0;
                break;
        case 1:
            for(int i = 0;i<4;i++){
                Actividad a = a1[i];
            }
            break;
        }
    }while(selected!=4);
    return 0;
}


void registrarAlumnos(){
    // Registro Estudiantes
    for(int i=1;i<=6;i++){
        Estudiante ex;
        ex.matricula = 2849893 + i;
        strcpy(ex.nombre, "Test "+i);
        strcpy(ex.apPaterno, "Test");
        strcpy(ex.apMaterno, "Test");
        Grupo_registrarEstudiante(&g2,&ex);
    }
    for(int i=1;i<=4;i++){
        Estudiante ex;
        ex.matricula = 2849873 + i;
        strcpy(ex.nombre, "Test "+i);
        strcpy(ex.apPaterno, "Test");
        strcpy(ex.apMaterno, "Test");
        Grupo_registrarEstudiante(&g1,&ex);
    }
    //Aqui hay que registrar a kis dek 3cv1
}


void registrarGrupos(){

    strcpy(g1.identificador, "3CV1");
    strcpy(g1.materia, "Analisis de algoritmos");


    strcpy(g1.horarioGrupo[0].tipo, tipoHorario[0]);
    strcpy(g1.horarioGrupo[0].dia, dias[1]);
    strcpy(g1.horarioGrupo[0].hora, horarios[5]);

    strcpy(g1.horarioGrupo[1].tipo, tipoHorario[1]);
    strcpy(g1.horarioGrupo[1].dia, dias[2]);
    strcpy(g1.horarioGrupo[1].hora, horarios[5]);

    strcpy(g1.horarioGrupo[2].tipo, tipoHorario[0]);
    strcpy(g1.horarioGrupo[2].dia, dias[4]);
    strcpy(g1.horarioGrupo[2].hora, horarios[5]);

    strcpy(g1.horarioGrupo[3].tipo, tipoHorario[2]);
    strcpy(g1.horarioGrupo[3].dia, dias[3]);
    strcpy(g1.horarioGrupo[3].hora, horarios[3]);

    strcpy(g2.identificador, "1CV6");
    strcpy(g2.materia, "Estructuras de datos");
    strcpy(g2.horarioGrupo[0].tipo, tipoHorario[1]);
    strcpy(g2.horarioGrupo[0].dia, dias[0]);
    strcpy(g2.horarioGrupo[0].hora, horarios[5]);

    strcpy(g2.horarioGrupo[1].tipo, tipoHorario[0]);
    strcpy(g2.horarioGrupo[1].dia, dias[3]);
    strcpy(g2.horarioGrupo[1].hora, horarios[5]);

    strcpy(g2.horarioGrupo[2].tipo, tipoHorario[0]);
    strcpy(g2.horarioGrupo[2].dia, dias[4]);
    strcpy(g2.horarioGrupo[2].hora, horarios[6]);

    strcpy(g2.horarioGrupo[3].tipo, tipoHorario[2]);
    strcpy(g2.horarioGrupo[3].dia, dias[2]);
    strcpy(g2.horarioGrupo[3].hora, horarios[3]);

}
