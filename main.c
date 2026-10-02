#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n; 

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += v[i];
    }
    float media = (float)soma/n;
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);

    return 0;
}