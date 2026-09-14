#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int a, b, c, d, e, maior;

   printf("Digite cinco números: ");
   scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

   maior = a;

   if(b > maior) maior = b;
   if(c > maior) maior = c;
   if(d > maior) maior = d;
   if(e > maior) maior = e;

   printf("Maior: %d", maior);

    return 0;
}
