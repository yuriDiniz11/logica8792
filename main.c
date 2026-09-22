#include<stdio.h>
#include<windows.h>

void saudar(){
    printf("Hello World!");
    printf("\nOlá Mundo!")
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   saudar();
   saudar();

    return 0;
}