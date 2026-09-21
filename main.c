#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   char frutas[3][20] = {"Maça", "Banana", "Laranja"};

    printf("%s\n", frutas[0]);
    printf("%s\n", frutas[1]);
    printf("%s\n", frutas[2]);

    return 0;
}