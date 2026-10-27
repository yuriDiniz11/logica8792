#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void saudacao(char nome[]){
    printf("Olá , %s\n", nome);
}
int soma(int a, int b){
    return a + b;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    saudacao("Ronaldinho");

    int resultado = soma;
    printf("%d", resultado);


    return 0;
}