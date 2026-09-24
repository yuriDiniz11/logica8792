#include<stdio.h>
#include<windows.h>
#include<math.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero, soma = 0;

    printf("Digite número para somar (0 encerra): ");
    scanf("%d", &numero);

    while(numero != 0){
        soma += numero;
        scanf("%d", &numero);
    }
    printf("Soma total = %d\n", soma);

    return 0;
}