#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>

struct datos{
    char nom_usuario[20];
    char clave[4][9];
};

struct datos * carga(int*);
struct datos * valida(char*,char*,struct datos*,int);
char * verifica (struct datos);
void reemplaza (struct datos *, char *);

int main(){
    struct datos *todos_los_usuarios;
    struct datos *usuarios_validados;
    int usuarios_cargados = 0;
    char nom_usu[20], contra[9], *nueva_contra, op;

    todos_los_usuarios = carga(&usuarios_cargados);

    do {

        fflush(stdin);
        printf("\n + Ingrese nombre usuario: ");
        scanf("%s",nom_usu);
        printf("\n + Ingrese contrasenia: ");
        scanf("%s",contra);
        usuarios_validados = valida(nom_usu,contra,todos_los_usuarios,usuarios_cargados);
        nueva_contra = verifica(usuarios_validados);

        do {
                fflush(stdin);
                printf("\n - Realizar otro cambio de contrasenia?<s/n>: ");
                scanf("%c",&op);
                if(op != 's' && op != 'n'){
                    printf("\n");
                    printf("\n xxxx Use 's' o 'n' para continuar xxxx \n");
                }

        } while(op != 's' && op != 'n');

    } while(op != 'n');

    return 0;
}

struct datos * carga(int *usuarios_cargados){


}
