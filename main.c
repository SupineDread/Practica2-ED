/***********************
Materia: Estructuras de datos
Profesora: Miriam Pescador Rojas
Descripcion: Creacion y registro de los tipos de datos
**************/
#include "estudiante.h"
#include "grupo.h"
#include "common.h"
#include "actividad.h"
#include "evaluacion.h"
#include <stdio.h>
#include <string.h>

Grupo grupos[5];
Actividad actividades[4] = {
    {1,"Actividad 1",{"Lunes 18 de febrero de 2019","3:00pm"},10},
    {2,"Actividad 1",{"Lunes 24 de febrero de 2019","3:00pm"},10},
    {3,"Actividad 1",{"Martes 19 de febrero de 2019","4:00pm"},50},
    {4,"Proyecto",{"Jueves 28 de febrero de 2019","3:00pm"},30},
};
void registrarGrupos(){

    strcpy(grupos[1].identificador, "3CV1");
    strcpy(grupos[1].materia, "Analisis de algoritmos");


    strcpy(grupos[1].horarioGrupo[0].tipo, tipoHorario[0]);
    strcpy(grupos[1].horarioGrupo[0].dia, dias[1]);
    strcpy(grupos[1].horarioGrupo[0].hora, horarios[5]);

    strcpy(grupos[1].horarioGrupo[1].tipo, tipoHorario[1]);
    strcpy(grupos[1].horarioGrupo[1].dia, dias[2]);
    strcpy(grupos[1].horarioGrupo[1].hora, horarios[5]);

    strcpy(grupos[1].horarioGrupo[2].tipo, tipoHorario[0]);
    strcpy(grupos[1].horarioGrupo[2].dia, dias[4]);
    strcpy(grupos[1].horarioGrupo[2].hora, horarios[5]);

    strcpy(grupos[1].horarioGrupo[3].tipo, tipoHorario[2]);
    strcpy(grupos[1].horarioGrupo[3].dia, dias[3]);
    strcpy(grupos[1].horarioGrupo[3].hora, horarios[3]);

    strcpy(grupos[2].identificador, "1CV6");
    strcpy(grupos[2].materia, "Estructuras de datos");
    strcpy(grupos[2].horarioGrupo[0].tipo, tipoHorario[1]);
    strcpy(grupos[2].horarioGrupo[0].dia, dias[0]);
    strcpy(grupos[2].horarioGrupo[0].hora, horarios[5]);

    strcpy(grupos[2].horarioGrupo[1].tipo, tipoHorario[0]);
    strcpy(grupos[2].horarioGrupo[1].dia, dias[3]);
    strcpy(grupos[2].horarioGrupo[1].hora, horarios[5]);

    strcpy(grupos[2].horarioGrupo[2].tipo, tipoHorario[0]);
    strcpy(grupos[2].horarioGrupo[2].dia, dias[4]);
    strcpy(grupos[2].horarioGrupo[2].hora, horarios[6]);

    strcpy(grupos[2].horarioGrupo[3].tipo, tipoHorario[2]);
    strcpy(grupos[2].horarioGrupo[3].dia, dias[2]);
    strcpy(grupos[2].horarioGrupo[3].hora, horarios[3]);

}
void registrarAlumnosIniciales(){
    for(int i=1;i<=6;i++){
        Estudiante ex;
        ex.matricula = 2849893 + i;
        sprintf(ex.nombre, "Test %d",i);
        strcpy(ex.apPaterno, "Test");
        strcpy(ex.apMaterno, "Test");
        Grupo_registrarEstudiante(&grupos[2],&ex);
    }
    for(int i=1;i<=4;i++){
        Estudiante ex;
        ex.matricula = 2849873 + i;
        sprintf(ex.nombre, "Test %d",i);
        strcpy(ex.apPaterno, "Test");
        strcpy(ex.apMaterno, "Test");
        Grupo_registrarEstudiante(&grupos[1],&ex);
    }
}
int main(){

    int selected = -1;
    int grupo = 0;
    registrarGrupos();
    registrarAlumnosIniciales();
    do{
        printf("Ingrese una opcion:\n1.-Agregar calificaciones\n2.-Calcular promedio por estudiante\n3.-Calcular estadisticas del grupo\n4.-Salir\n");
        scanf("%d",&selected);
        switch(selected){
        case 4:
            return 0;
            break;
        case 1:
            while(1){
                printf("Introduzca el grupo:\n1)3CV1\n2)1CV6\n");
                scanf("%d",&grupo);
                if(grupo == 1 || grupo == 2){
                    printf("Grupo seleccionado: %s\n",grupos[grupo].identificador);
                    for(int i = 1; i<=grupos[grupo].inscritos;i++){
                            printf("Alumno: %s %s %s\n",grupos[grupo].listaEstudiantes[i].nombre,grupos[grupo].listaEstudiantes[i].apPaterno,grupos[grupo].listaEstudiantes[i].apMaterno);
                            for(int j = 0;j<4; j++){
                                Actividad_mostrar(actividades[j]);
                                while(1){
                                    printf("Calificacion:");
                                    float c = 0.0;
                                    scanf("%f",&c);
                                    if(c<0.0 || c>10.0){
                                        printf("Calificacion invalida\n");
                                    }else{
                                        printf("observaciones:\n");
                                        Evaluacion e;
                                        e.actividad = actividades[j];
                                        e.calificacion = c;
                                        scanf("%s",&e.observaciones);
                                        grupos[grupo].listaEstudiantes[i].evaluaciones[j+1] = e;
                                        break;
                                    }
                                }
                            }
                    }
                    break;
                }else{
                    printf("El grupo introducido es incorrecto\n");
                }
            }
            break;
        case 2:
            while(1){
                printf("Introduzca el grupo:\n1)3CV1\n2)1CV6\n");
                scanf("%d",&grupo);
                if(grupo == 1 || grupo == 2){
                    printf("Estudiante              |Promedio\n");
                    for(int i = 1; i <= grupos[grupo].inscritos; i++){
                        printf("%s %s %s  |%f\n",grupos[grupo].listaEstudiantes[i].nombre,grupos[grupo].listaEstudiantes[i].apPaterno,grupos[grupo].listaEstudiantes[i].apMaterno,Estudiante_calcularPromedio(grupos[grupo].listaEstudiantes[i]));
                    }
                    break;
                }else{
                    printf("El grupo introducido es incorrecto\n");
                }
            }
            break;
        case 3:
            while(1){
                printf("Introduzca el grupo:\n1)3CV1\n2)1CV6\n");
                scanf("%d",&grupo);
                if(grupo == 1 || grupo == 2){
                    Grupo_mostrar(&grupos[grupo]);
                    break;
                }else{
                    printf("El grupo introducido es incorrecto\n");
                }
            }
            break;
        }
    }while(selected!=4);
    return 0;
}

