#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero, contador = 0;

    printf("Digite números (0 para parar): \n");
    scanf("%d", &numero);

    while(numero != 0){
        contador++;
        scanf("%d", &numero);
    }

    printf("Quantidade de números digitados: %d\n", contador);

    return 0;
}