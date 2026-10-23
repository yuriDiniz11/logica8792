#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int num;

    printf("Digite um mês por números: ");
    scanf("%d", &num);

    switch (num){
        case 1: case 3: case 5: 
        case 7: case 8: 
        case 10: case 12:
        printf("O mês que você digitou tem 31 dias!");
        break;

        case 2:
        printf("O mês que você digitou tem 28 dias!");
        break;

        case 4: case 6:
        case 9: case 11:
        printf("O mês que você digitou tem 30 dias!");
        break;

        default:
        printf("Digite o n° de um mês válido!");
    }

    return 0;
}