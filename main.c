#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    
    printf("Digite um valor para saber a tabuada: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
        int resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }

    return 0;
}