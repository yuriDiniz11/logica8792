#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int opcao;
    float a, b;

    do{
        printf("\n---MENU---\n");
        printf("1 - Soma\n");
        printf("2 - Substração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                printf("Resultado: %.2f\n", a + b);
            break;

            case 2:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                printf("Resultado: %.2f\n", a - b);
            break;

            case 3:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                printf("Resultado: %.2f\n", a * b);
            break;

            case 4:
                printf("Digite dois números: ");
                scanf("%f %f", &a, &b);
                if(b != 0)
                    printf("Resultado: %.2f\n", a / b);
                else 
                    printf("Erro: Divisão por zero!\n");
            break;

            case 0:
                printf("Saindo ...");
            break;
            default:
                printf("Opção inválida");
            break;
        

        }

    }while(opcao != 0);
    

    return 0;
}