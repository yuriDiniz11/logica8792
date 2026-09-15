#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int a, b, c, d, e, menor, maior;

   printf("Digite um valor para a: ");
   scanf("%d", &a);

   printf("Digite um valor para b: ");
   scanf("%d", &b);

   printf("Digite um valor para c: ");
   scanf("%d", &c);

   printf("Digite um valor para d: ");
   scanf("%d", &d);

   printf("Digite um valor para e: ");
   scanf("%d", &e);

   menor = a;
   maior = a;

   if(b < menor) menor = b;
   if(c < menor) menor = c;
   if(d < menor) menor = d;
   if(e < menor) menor = e;

   if(b > maior) maior = b;
   if(c > maior) maior = c;
   if(d > maior) maior = d;
   if(e > maior) maior = e;

   printf("menor: %d\n", menor);
   printf("maior: %d", maior);

    return 0;
}

//testeeeee     