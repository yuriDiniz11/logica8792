#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char nomes[3][20] ={
        "Ronaldo",
        "Ronaldinho",
        "Ronaldão"
    };
        for(char i = 0; i < 3; i++){
            printf("%s\n", nomes[i]);
        }

    return 0;
}