#include<stdio.h>
#include<windows.h>

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int main(){

    float a, b;

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int resultado1 = somar(5, 3);
   printf("O resultado da soma é: %d", resultado1);

   int resultado2 = subtrair(5, 3);
   printf("\nO resultado da subtração é: %d", resultado2);

  

    return 0;
}