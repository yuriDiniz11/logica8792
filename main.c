#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, soma = 0;

    printf("Digite um n°: ");
    scanf("%d", &n);

    while (n != 0){   
        if(n % 2 == 0){
            soma+= n;     
        }
        printf("Digite um n°: ");
        scanf("%d", &n);

    }
    printf("Soma: %d\n", soma);
    

    return 0;
}