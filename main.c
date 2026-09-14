#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int idade;

   printf("Digite um número: ");
   scanf("%d", &idade);


   if(idade >= 18){
    printf("Você é maior de idade!");
   }else{
    printf("Você é menor de idade!");
   }

    return 0;
}
