#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int i = 1;

    do{
        printf("%d\n", i);
        i++;
    }while(i <= 5);

    return 0;
}