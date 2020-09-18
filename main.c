#include <stdio.h>
#include <conio.h>
#include "personaje.h"

void capturar_enteros(){
    int enteros[5];
    int suma = 0;
    printf("Capturando numeros: \n");
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    printf("Mostrando numeros:\n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        suma = suma + enteros[i];
    }

    printf("Suma: %i\n", suma);
    printf("Promedio: %.2f\n", suma/5.0);
    getch();
    system("cls");
}

void mostrar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s", cadena);
    }
    getch();
    system("cls");
}

int main(){
    char op;
    char cadena[20];
    int n;
    do{
        fflush(stdin);
        printf("1) Capturar enteros\n");
        printf("2) Capturar cadena n veces\n");
        printf("3) Agregar personaje\n");
        printf("4) Mostrar personajes\n");
        printf("0) Salir\n");
        scanf("%c", &op);

        switch(op)
        {
            case '1':
                capturar_enteros();
                break;
            case '2':
                printf("Escribe una cadena de hasta 20 caracteres: ");
                fflush(stdin);
                fgets(cadena, sizeof(cadena), stdin);
                printf("n: ");
                scanf("%i", &n);
                mostrar(n, cadena);
                break;
            case '3':
                capturar_personaje();
                system("cls");
                break;
            case '4':
                mostrar_personajes();
                system("cls");
                break;
            case '0':
                break;
            default:
                printf("Opcion invalida\n");
                break;
        }
        
    }while(op != '0');
}