#include <stdio.h>

imprimir(){
    
    int x = 9;
    int y = 10;
    int aux = x;
    x = y;
    y = aux;

    printf("O numero guardado e: %d", x);
    printf("\nO numero guardado e: %d", y);
}

main(){
    imprimir();
}