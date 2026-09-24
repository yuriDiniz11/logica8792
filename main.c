#include<stdio.h>
#include<windows.h>
#include<math.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int opcao = -1;

    while(opcao != 0){
        printf("\nMenu: \n");
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Consultar\n");
        printf("0 - sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: printf("Você escolheu Depositar\n"); break;
            case 2: printf("Você escolheu Sacar\n"); break;
            case 3: printf("Você escolheu Consultar\n"); break;
            case 0: printf("Saindo ..."); break;
            default: printf("Opção inválida!\n"); break;
        }
    }

    return 0;
}