#include<stdio.h>
#include<windows.h>
#include<math.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero;

    printf("Digite um n° positivo: ");
    scanf("%d", &numero);

    while(numero <= 0){
        printf("N° inválido! Digite novamente: ");
        scanf("%d", &numero);
    }
    printf("N° válido: %d\n", numero);

    return 0;
}