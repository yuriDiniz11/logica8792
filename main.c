#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int numerosInteiros[5] = {1, 5, 10, 15, 20};
   float numerosFloats[5] = {10.5, 20.8, 30.2, 40.9, 50.1};
   char carros[3][20] = {"Ferrari", "Mercedez", "Mazda"};

   printf("Mostraremos os números inteiros primeiro:\n");

   for(int i = 0; i < 5; i++){
    printf("%d\n", numerosInteiros[i]);
   }

   printf("\nAgora mostraremos os números floats:\n");

   for(int j = 0; j < 5; j++){
    printf("%.2f\n", numerosFloats[j]);
   }

   printf("\nAgora mostraremos os veículos:\n");

   for(int k = 0; k < 3; k++){
    printf("%s\n", carros[k]);
   }

   

    return 0;
}