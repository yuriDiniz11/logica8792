#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void somar(int a, int b){
    printf("Soma = %d\n", a + b);
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    somar(5, 2);

    return 0;
}