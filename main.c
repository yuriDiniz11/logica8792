#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   float celsius, fahrenheit;

   printf("Digite a temperatura em Celsius: ");
   scanf("%f", &celsius);

   fahrenheit = (celsius * 9.0 / 5.0) + 32;
   printf("Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
