#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int ano;
   printf("Digite o ano: ");
   scanf("%d", &ano);

   if((ano % 4 == 0 && ano % 100 != 0)|| ano % 400 == 0){
    printf("Ano Bissexto!\n");
   }else{
    printf("Ano NÂO bissexto!\n");
   }

    return 0;
}