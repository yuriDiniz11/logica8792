#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, pares = 0;

    printf("Digite um n°: ");
    scanf("%d", &n);

    while (n != 0){   
        if(n % 2 == 0){
            pares+= n;     
        }
        printf("Digite um n°: ");
        scanf("%d", &n);

    }
    printf("Quantidade de n° pares: %d\n", pares);
    

    return 0;
}