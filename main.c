#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int diaDaSemana;

   printf("Insira em qual dia em que estamos!(em números): ");
   scanf("%d", &diaDaSemana);

   switch(diaDaSemana){
        case 1:
            printf("Domingo!");
            break;
        case 2:
            printf("Segunda-Feira!");
            break;
        case 3:
            printf("Terça-Feira!");
            break;
        case 4:
            printf("Quarta-Feira!");
            break;
        case 5:
            printf("Quinta-Feira!");
            break;
        case 6:
            printf("Sexta-Feira!");
            break;
        case 7:
            printf("Sábado!");
            break;
        default:
            printf("Número inválido!!");
            break;
   }

    return 0;
}

