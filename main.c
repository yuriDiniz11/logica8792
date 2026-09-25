#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    float valor, soma = 0;

    printf("Quantos números deseja digitar: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &valor);
        soma += valor;
    }
    printf("Média: %.2f\n", soma / n);

    return 0;
}