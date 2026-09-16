#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int n1, n2, n3;
   float media;
   float freq;

   printf("Digite a nota 1: ");
   scanf("%d", &n1);

   printf("Digite a nota 2: ");
   scanf("%d", &n2);

   printf("Digite a nota 3: ");
   scanf("%d", &n3);

   media = ( n1 + n2 + n3) / 3;

    printf("Digite a frequência (em números apenas): ");
    scanf("%f", &freq);

    if(media >= 7 && freq >= 75){
        printf("\nAprovado com sucesso!");
    }else{
        printf("\nReprovado!");
    }

    return 0;
}

