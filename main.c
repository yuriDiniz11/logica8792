#include<stdio.h>
#include<windows.h>

char* returnName(char nome[]){
    return nome;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("O nome é: %s", returnName("Kelly Slater"));

    return 0;
}