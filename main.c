#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void linha(){
    printf("-------------\n");
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    linha();
    printf("What does the fox say...\n");
    linha();

    return 0;
}