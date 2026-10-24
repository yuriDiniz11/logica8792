#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int ALUNOS = 5;
    float notas[ALUNOS];
    float soma = 0;

    for(int i = 0; i < ALUNOS; i++){
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("\n--- NOTAS ---\n");
    for(int i = 0; i < ALUNOS; i++){
        printf("Aluno %d: %.1f\n", i + 1, notas[i]);
    }
    printf("\nMédia da turma: %.1f\n", soma / ALUNOS);

    return 0;
}