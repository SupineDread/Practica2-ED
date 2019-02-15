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

Grupo grupos[5];

int main(){

    int selected = -1;
    do{
        printf("Ingrese una opcion:\n1.-Agregar calificaciones\n2.-Calcular promedio por estudiante\n3.-Calcular estadisticas del gruoo\n4.-Salir\n");
        scanf("%d",&selected);
        switch(selected){
        case 4:
            return 0;
            break;
        case 1:
            printf("Introduzca el grupo:\n1)3CV1\n2)3CV2");
            int grupo = 0;
            scanf("%d",&grupo);
            for(int i = 0;i<4;i++){
                Actividad a = a1[i];

            }
            break;
        case 2:
            break;
        case 3:
            break;
        }
    }while(selected!=4);
    return 0;
}

