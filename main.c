#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//função variavel soma, total setada em 0;
//ela tem que somar de forma repetida;
//for - while
//função com paramentro (int n) 

int soma(int n){
    int total = 0;
    

    for(int i = 1; i <= n; i++){
        total += i;        
    }
    return total;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    

    int tot;

    printf("Digite um n°: ");
    scanf("%d", &tot);

    printf("Soma de 1 a n: %d\n", soma(tot));

    return 0;
}