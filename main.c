#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   float peso, altura, imc;

   printf("Digite o peso (kg): ");
   scanf("%f", &altura);

   printf("Digite a altura: ");
   scanf("%f", &peso);

   imc = peso / (altura * altura);

   if(imc < 18.5){
        printf("Seu peso é: %f\n", peso);
        printf("Sua altura é: %f\n", altura);
        printf("Classificação: Abaixo do peso!\n");
   }else if(imc < 25){
        printf("Seu peso é: %f\n", peso);
        printf("Sua altura é: %f\n", altura);
        printf("Classificação: Peso normal!\n");
   }else if(imc < 30){
        printf("Seu peso é: %f\n", peso);
        printf("Sua altura é: %f\n", altura);
        printf("Classificação: Sobrepeso!\n");
   }else{
        printf("Classificação: Obesidade!\n");
   }

    return 0;
}