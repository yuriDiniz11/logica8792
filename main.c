#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int a, b, c, maior;

   printf("Digite três números: ");
   scanf("%d %d %d", &a, &b, &c);

   maior = a;

   if(b > maior) maior = b;
   if(c > maior) maior = c;

   printf("Maior: %d", maior);

    return 0;
}
