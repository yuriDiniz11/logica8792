#include<stdio.h>
#include<windows.h>

int ehPrimo(int n){

    if(n < 2)return 0;

    for(int i = 2; i < n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(ehPrimo(numero))
        printf("%d é primo\n", numero);
    else    
        printf("%d não é primo\n", numero);

    return 0;
}