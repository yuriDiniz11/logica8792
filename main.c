#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


void soma1(){
    int x, y, resultado;
    printf("\nDigite um valor para x: ");
    scanf("%d", &x);
    printf("\nDigite um valor para y: ");
    scanf("%d", &y);
    resultado = x + y;
    printf("\nA soma de %d + %d = %d", x, y, resultado);
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    soma1();

    

    return 0;
}