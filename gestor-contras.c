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

   /* do {

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

    } while(op != 'n');*/

    return 0;
}

struct datos * carga(int *usuarios_cargados){
   int i,j;
   char nom_usu[20] = {0}, contrasenia[9] = {0};
   static struct datos todos_los_usuarios[1000];

   for(i = 0; i < 1000; i++) {
        system("cls");
        fflush(stdin);
        printf("\n /// PARA FINALIZAR CON LA CARGA, SIMPLEMENTE AL COLOCAR EL NOMBRE DE USUARIO, ESCRIBA '*' /// \n");
        printf("\n");
        printf("\n + Nombre de usuario: ");
        scanf("%s",nom_usu);
        if(strcmp(nom_usu,"*") == 0) {
            break;
        } else {
            strcpy(todos_los_usuarios[i].nom_usuario,nom_usu);
            printf("\n * USUARIO CARGADO CON EXITO * \n");
            for(j = 0; j < 4; j++){
                do {
                    fflush(stdin);
                    printf("\n Contrasenia nro %i",j + 1);
                    printf("\n + Ingrese la contrasenia: ");
                    scanf("%s",contrasenia);
                    if(strlen(contrasenia) > 9) {
                        printf("\n");
                        printf("\n xxxx La contrasenia no debe superar los 9 caracteres xxxx \n");
                    }
                } while(strlen(contrasenia) > 9);

                strcpy(todos_los_usuarios[i].clave[j],contrasenia);
                printf("\n * CONTRASENIA CARGADA CON EXITO * \n");
            }

            (*usuarios_cargados)++;
        }

        printf("\n");
        system("pause");
   }


   printf("\n *** Todos los usuarios han sido cargados con exito! *** \n");

   return todos_los_usuarios;
}
