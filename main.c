#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int tabuada;

    printf("Digite um n° para saber a tabuada: ");
    scanf("%d", &tabuada);

    for(int i = 0; i <= 10; i++){
        int resultado = i * tabuada;
        printf("O resultado de %d x %d = %d\n", tabuada, i, resultado);
    }

    return 0;
}