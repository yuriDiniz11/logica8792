#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero, soma = 0;

    do{
        printf("Digite um n° (0 para parar): ");
        scanf("%d", &numero);
        soma += numero;
    }while(numero != 0);

    printf("Soma: %d\n", soma);

    return 0;
}