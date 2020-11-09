#include <stdio.h>

char nome[40];
char endereco[50];
int cep;
int telefone;

leiaDados(){
    printf("Digite seu nome completo: ");
    fgets(nome, 40, stdin);

    printf("Digite seu endereco: ");
    fgets(endereco, 50, stdin);

    printf("Digite seu CEP(XXXXXXXX): ");
    scanf("%d", &cep);

    printf("Digite seu telefone (9XXXXXXXX): ");
    scanf("%d", &telefone);

}

escrevaDados() {
    printf("\nNome: %s", nome);
    printf("Endereco: %s", endereco);
    printf("Cep: %d, Telefone: %d", cep, telefone);
}

int main() {
    leiaDados();
    escrevaDados();

    return 0;
}
