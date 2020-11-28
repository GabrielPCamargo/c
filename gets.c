#include <stdio.h>

int main() {

    char string[100]; //Declara uma string
    gets(string); //Atribiu um valor a variável
    printf("Voce digitou %s", string);
    return 0;
}