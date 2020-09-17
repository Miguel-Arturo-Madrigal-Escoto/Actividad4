#include <stdio.h>

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
    system("pause");
    system("cls");
}

int main(){
    char op;
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
                break;
            case '3':
                break;
            case '4':
                break;
            default:
                break;
        }
        
    }while(op != '0');
}