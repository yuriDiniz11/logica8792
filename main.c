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

    struct Pessoa p1 = {"Ronaldinho", 30, 1.70};
    struct Pessoa p2 = {"Ronaldão", 40, 1.80};
    struct Pessoa p3 = {"Ronaldowsky", 50, 1.90};
    
    printf("Nome: %s | Idade: %d | Altura: %.2f\n", p1.nome, p1.idade, p1.altura);
    printf("Nome: %s | Idade: %d | Altura: %.2f\n", p2.nome, p2.idade, p2.altura);
    printf("Nome: %s | Idade: %d | Altura: %.2f\n", p3.nome, p3.idade, p3.altura);

    return 0;
}