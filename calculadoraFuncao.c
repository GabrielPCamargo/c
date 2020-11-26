#include <stdio.h>

int adicao(float n1, float n2){
    printf("%.2f + %.2f = %.2f \n", n1, n2, n1 + n2);
}

int subtracao(float n1, float n2){
    printf("%.2f - %.2f = %.2f \n", n1, n2, n1 - n2);
}

int multiplicacao(float n1, float n2){
    printf("%.2f x %.2f = %.2f \n", n1, n2, n1 * n2);
}

int divisao(float n1, float n2){
    printf("%.2f / %.2f = %.2f \n", n1, n2, n1 / n2);
}


int main() {
    float n1, n2;
    printf("----------------Calculadora------------------\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("---------------------------------------------\n");
    printf("Resultados:\n");

    adicao(n1, n2);
    subtracao(n1, n2);
    multiplicacao(n1, n2);
    divisao(n1, n2);

}