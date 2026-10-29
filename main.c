#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int dobro(int numero){
    return numero * 2;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int valor = 8;

    printf("Dobro = %d\n", dobro(valor));

    return 0;
}