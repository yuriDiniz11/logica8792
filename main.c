#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int resposta;

    do{
        printf("Executando o programa...\n");
        printf("Deseja continuar? (1 - Sim | 0 - Não): ");
        scanf("%d", &resposta);
    }while(resposta == 1);

    printf("Programa encerrado!\n");

    return 0;
}