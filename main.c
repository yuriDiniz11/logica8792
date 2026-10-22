#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    do{
        printf("Digite um n° (não negativo): ");
        scanf("%d", &n);
    }while(n < 0);

    printf("Você digitou: %d\n", n);

    return 0;
}