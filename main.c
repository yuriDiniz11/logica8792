#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int n;

   printf("Digite um número: ");
   scanf("%d", &n);

    printf("%s", n > 0 ? "Positivo" : (n < 0 ? "Negativo" : "Zero"));    

    return 0;
}
