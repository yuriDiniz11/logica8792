#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int a, b;

   printf("Digite dois números: ");
   scanf("%d %d", &a, &b);

   if(a == b){
    printf("Os números são iguais!\n");
   }else{
    printf("Os números são diferentes!\n");
   }

    return 0;
}

//testeeeee     