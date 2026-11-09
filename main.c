#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void contagem(int n){
    for(int i = n; i >= 1; i--){
        printf("%d\n", i);
    }
    printf("Fogo!!\n");
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    contagem(5);

    return 0;
}