#include<stdio.h>
#include<windows.h>
#include<math.h>

int fatorial(int n){
    int resultado = 1;
    for(int i = 1; i <= n; i++){
        resultado *= i; //*= significa: resultado = resultado * i;
    }
    return resultado;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero = 5;
    printf("Fatorial de %d = %d\n", numero, fatorial(numero));

    return 0;
}