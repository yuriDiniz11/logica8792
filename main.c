#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int limite;

    printf("Digite um valor para limite: ");
    scanf("%d", &limite);

    for(int n = 1; n <= limite; n++){
        int soma = 0;
        for(int i = 1; i < n; i++){
            if(n % i == 0){
                soma += i;
            }
        }
        if(soma == n & n != 0){
            printf("%d é um n° perfeito\n", n);
        }
        
    }

    return 0;
}