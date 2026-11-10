#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int somaDigitos(int n){
    int soma = 0;
    while(n != 0){
        soma += n % 10; // soma = 0 + n % 10
        n /= 10;
    }
    return soma;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    

    int inteiro;

    printf("Digite um n°: ");
    scanf("%d", &inteiro);

    printf("Soma dos digitos é: %d\n", somaDigitos(inteiro));

    return 0;
}