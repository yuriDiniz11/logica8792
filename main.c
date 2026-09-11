#include<stdio.h>
#include<windows.h>
#include<stdbool.h>

bool ehPar(int numero){
    return(numero % 2 == 0);

}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Equivale a %d meses\n", idade * 12);
    printf("Equivale a %d dias (aproximado)\n", idade * 365);
    
    return 0;
}