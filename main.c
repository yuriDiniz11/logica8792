#include<stdio.h>
#include<windows.h>

void saudar(){
    printf("Hello World!");
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   saudar();

    return 0;
}