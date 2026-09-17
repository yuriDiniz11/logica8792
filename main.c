#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   float n1, n2, n3, media;

   printf("Digite a nota 1: ");
   scanf("%f", &n1);
   
    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) /3;

    if (media <= 4){
        printf("Reprovado!");
    }else if(media >= 7){
        printf("Aprovado!!!");
    }else{
        printf("Recuperação!");
    }



    return 0;
}

