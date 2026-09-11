#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   float raio;
   const float PI = 3.14159;

   printf("Digite o raio do circulo: ");
   scanf("%f", &raio);
   printf("Area: %.2f\n", PI * raio * raio);
   printf("Perimetro: %.2f\n", 2 * PI * raio);
    
    return 0;
}