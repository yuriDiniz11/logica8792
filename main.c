#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int opcao;

    do{
        printf("\n--- MENU ---\n");
        printf("1 - Dizer olá\n");
        printf("2 - Dizer tchau\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Olá\n");
        }else if(opcao == 2){
            printf("Tchau\n");
        }else if(opcao != 0){
            printf("Opção inválida!\n");
        }
    }while(opcao != 0);

    printf("Até mais\n");

    return 0;
}