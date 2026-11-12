#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    
    //soma dos digitos com final 10 
    //dezena i / 10
    //unidade i % 10

    int soma = 0;    

    for(int i = 10; i <= 99; i++){
        int dezena = i / 10;
        int unidade = i % 10;

        if(dezena + unidade == 10){
            printf("%d\n", i);
            soma++;
        }
    }
    printf("N°: %d\n", soma);

    return 0;
}