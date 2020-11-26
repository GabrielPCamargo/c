#include <stdio.h>

float adicao(float n1, float n2){
    return (n1 + n2);
}

float subtracao(float n1, float n2){
    return (n1 - n2);
}

float multiplicacao(float n1, float n2){
    return n1 * n2;
}

float divisao(float n1, float n2){
    return n1 / n2;
}


int main() {
    
    float n1, n2;
    printf("----------------Calculadora------------------\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("---------------------------------------------\n");

    float totalAdicao, totalSubtracao, totalMultiplicacao, totalDivisao;

    printf("Resultados:\n");
    totalAdicao = adicao(n1, n2);
    printf("%.2f + %.2f = %.2f\n", n1, n2, totalAdicao);

    totalSubtracao = subtracao(n1, n2);
    printf("%.2f - %.2f = %.2f\n", n1, n2, totalSubtracao);

    totalMultiplicacao = multiplicacao(n1, n2);
    printf("%.2f x %.2f = %.2f\n", n1, n2, totalMultiplicacao);

    totalDivisao = divisao(n1 , n2);
    printf("%.2f / %.2f = %.2f\n", n1, n2, totalDivisao);

}