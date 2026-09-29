#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    printf("Digite o tamanho da pirâmide: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for(int k = 1; k <= (2 * i - 1); k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}