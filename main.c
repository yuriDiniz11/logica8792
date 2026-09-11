#include<stdio.h>
#include<windows.h>
#include<stdbool.h>

bool ehPar(int numero){
    return(numero % 2 == 0);

}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   float valor, cotacao;

   printf("Digite o valor em reais: ");
   scanf("%f", &valor);
   printf("Digite a cotação do dolar: ");
   scanf("%f", &cotacao);

   printf("Valor em dolares: %.2f\n", valor / cotacao);
    
    return 0;
}