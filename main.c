#include<stdio.h>
#include<windows.h>

char* saudacao(){
    return "May the force be with you!";
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("%s\n", saudacao()); 

    return 0;
}