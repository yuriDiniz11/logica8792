#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int segundos, horas, minutos, resto;

   printf("Digite a quantidade de segundos: ");
   scanf("%d", &segundos);

   horas = segundos / 3600;
   minutos = (segundos % 3600) / 60;
   resto = segundos % 60;

   printf("%d horas, %d minutos e %d segundos\n", horas, minutos, resto);

    return 0;
}
