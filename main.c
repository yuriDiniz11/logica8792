#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, soma;

    printf("Digite N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += i;
        soma -= 1;
        printf("\nO resultado %d + %d = %d", soma, i, soma + i);
    }

    

    return 0;
}