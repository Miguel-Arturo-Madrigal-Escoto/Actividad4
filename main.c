#include <stdio.h>

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