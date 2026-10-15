#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;

};

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    struct Pessoa p1;
    
    printf("Digite o nome: ");
    scanf("%s", &p1.nome);

    printf("Digite a idade: ");
    scanf("%d", &p1.idade);

    printf("Digite a altura: ");
    scanf("%.2f", &p1.altura);

    printf("\n--- Dados da Pessoa ---\n");
        printf("Nome: %s\n", p1.nome);
        printf("Idade: %d\n", p1.idade);
        printf("Altura: %.2f\n", p1.altura);

    return 0;
}