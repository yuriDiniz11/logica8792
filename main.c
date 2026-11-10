#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int somaPares(int n){
    int soma = 0;
    for(int i = 2; i <= n; i += 2){
        soma += i;
    }
    return soma;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    

    printf("Soma dos pares até 10: %d\n", somaPares(10));
    
    return 0;
}