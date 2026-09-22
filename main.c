#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int x = 10;
   int *p = &x;

   printf("Valor de x: %d\n", x);
   printf("Endereço de x: %p\n", &x);
   printf("Valor via ponteiro: %d\n", *p);

    return 0;
}