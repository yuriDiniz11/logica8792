#include<stdio.h>
#include<windows.h>
#include<math.h>

int tabuada(int n){
    int resultado;
    printf("Tabuada do %d:\n", n);
    for(int i = 1; i <= 10; i++){
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    return resultado;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    tabuada(7);

    return 0;
}