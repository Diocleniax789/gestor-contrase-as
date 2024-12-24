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
    int usuarios_cargados = 0;
    todos_los_usuarios = carga(&usuarios_cargados);


    return 0;
}

struct datos * carga(int *usuarios_cargados){


}
