#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int numeros[] = {1, 2, 3};

   numeros[0] = 10;

   printf("%d", numeros[0]);

    return 0;
}