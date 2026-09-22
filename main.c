#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int soma = 0;
   int i;

   for(i = 1; i <= 5; i++){
    soma = soma + i;
   }

   //Usando o printf fora das chaves do for ele cita número por número após soma!
   //Usando o printf dentro das chaves ele da apenas o resultado final da soma!!

   printf("Soma é %d\n", soma);

    return 0;
}