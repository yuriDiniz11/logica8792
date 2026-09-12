#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int n;

   printf("Digite um número: ");
   scanf("%d", &n);



   if(n > 0){
        printf("Positivo\n");
}else{
        printf("Negativo\n");
}

    return 0;
}
