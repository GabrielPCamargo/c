#include <stdio.h>

void imprime(char letra){
    printf("A letra que voce digitou foi: %c\n", letra); //Imprime a letra digitada
    printf("O numero da letra '%c' na teabela ASCII e %d!", letra, letra); //Imprime número do caractere na tabela ASCII
}

int main(){
    char letra; //Declara a variável letra como um caractere
    printf("Digite uma letra: "); //Imprime texto de orientação à digitação
    scanf("%c", &letra); //Escaneia a letra digitada.
    imprime(letra); //Chama funçao passando como parâmetro a letra escaneada.

    return 0;
}