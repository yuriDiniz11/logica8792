#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char placa[15];
    int opcao;
    
    do{
        printf("\n---CADASTRO DE PLACAS---\n");

        printf("1 - Cadastrar placa\n");
        printf("2 - Ver placa registrada\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite a placa do veículo: ");
                scanf("%s", placa);
                printf("Placa registrada com sucesso!\n");
                break;
            case 2: 
                if(strlen(placa) == 0){
                    printf("Nenhuma placa registrada.\n");
                }else{
                    printf("Placa registrada: %s\n", placa);
                }
                break;
            case 3:
                printf("Saindo do sistema...\n");
                break;
            default: 
                printf("Opção inválida!\n");
        }
    }while(opcao != 3);

    return 0;
}