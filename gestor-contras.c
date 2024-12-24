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

    return 0;
}
