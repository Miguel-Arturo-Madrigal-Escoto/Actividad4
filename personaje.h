#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <stdio.h>
#include <conio.h>

struct personaje{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}personajes[5];

unsigned int cont = 0;

void capturar_personaje(){
    fflush(stdin);
    if(cont < 5){
        printf("Nombre: ");
        gets(personajes[cont].nombre);
        fflush(stdin);
        printf("Tipo: ");
        gets(personajes[cont].tipo);
        fflush(stdin);
        printf("Fuerza: ");
        scanf("%f", &personajes[cont].fuerza);
        printf("Salud: ");
        scanf("%i", &personajes[cont].salud);
        cont++;
    }
    else{
        printf("Arreglo de personajes lleno\n");
    }
    getch();
}

void mostrar_personajes(){
    for (size_t i = 0; i < cont; i++)
    {
        printf("Nombre: %s\n", personajes[i].nombre);
        printf("Tipo: %s\n", personajes[i].tipo);
        printf("Fuerza: %f\n", personajes[i].fuerza);
        printf("Salud: %i\n", personajes[i].salud);
    }
    getch();
}
#endif 