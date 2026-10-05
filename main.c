#include<stdio.h>
#include<windows.h>

void msg(){
    printf("Bon voyage!");
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    msg(); 
    
    return 0;
}