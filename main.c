#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    

    int soma = 0;

    //pegar n° de 1 a 50

    for(int i = 1; i <= 50; i++){
        if(i % 2 == 1){
            printf("%d\n", i);
            soma += i;
        }
    }
    printf("%d\n", soma);

    return 0;
}