#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int voto;

    printf("Faça seu voto!(10, 20, 30, 40 ou 50):");
    scanf("%d", &voto);

    if(voto == 10){
        printf("Você votou em 10-Ronaldinho!");
    }else if(voto == 20){
        printf("Você votou em 20-Kelly Slater!");
    }else if(voto == 30){
        printf("Você votou em 30-Scooby doo!");
    }else if(voto == 40){
        printf("Você votou em 40-Darth Vader!");
    }else if(voto == 50){
        printf("Você votou em 50-Smeagle!");
    }else{
        printf("Voto inválido, digite novamente!");
    }

    return 0;
}