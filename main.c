#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int DIAS = 7;
    float temp[DIAS];
    float soma = 0, media;
    float maior, menor;
    int diaMaior = 1, diaMenor = 1;
    int acimaMedia = 0;

    for(int i = 0; i < DIAS; i++){
        printf("Temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }
    media = soma / DIAS;
    maior = temp[0];
    menor = temp[0];

    for(int i = 1; i < DIAS; i++){
        if(temp[i] > maior){
            maior = temp[i];
            diaMaior = i + 1;
        }
        if(temp[i] < menor){
            menor = temp[i];
            diaMenor = i + 1;
        }
    }
    for(int i = 0; i < DIAS; i++){
        if(temp[i] > media){
            acimaMedia++;
        }
    }
    printf("\n--- Temperaturas ---\n");
    
    for(int i = 0; i < DIAS; i++){
        printf("Dia %d: %.1f\n", i + 1, temp[i]);
    }
    printf("\nMédia da semana: %.1f\n", media);
    printf("Maior: %.1f (dia %d)\n", maior, diaMaior);
    printf("Menor: %.1f (dia %d)\n", menor, diaMenor);
    printf("Dias acima da média: %d\n", acimaMedia);

    return 0;
}