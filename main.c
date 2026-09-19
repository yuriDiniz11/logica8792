#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int n;
   printf("Digite um número: ");
   scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0){
        printf("Múltiplo de 3 e 5\n");
    }else if(n % 3 == 0){
        printf("Múltiplo de 3\n");
    }else if(n % 5 == 0){
        printf("Múltiplo de 5\n");
    }else{
        printf("Não é múltiplo de 3 nem de 5\n");
    }  

    return 0;
}

