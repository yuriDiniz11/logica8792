#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int soma = 1;

    while(soma <= 100){
        for(int i = 1; i <= 100; i++){
            int result = i + soma;
            printf("%d + %d = %d\n", i, soma, result);
            soma++;
    }
}

    return 0;
}