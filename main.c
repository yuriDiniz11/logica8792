#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    int a = 5;
    int b = 4;

    printf("O resultado é: %d\n", (a + b));
    printf("O resultado é: %d\n", (a - b));
    printf("O resultado é: %d\n", (a / b));
    printf("O resultado é: %d\n", (a * b));


    return 0;
}