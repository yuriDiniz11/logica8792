#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    
    //quantidade de n° que terminam em 0 OU 5; de 1 a 100
    //int total

    int total = 0;

    for(int i = 1; i <= 100; i++){
        if(i % 10 == 0 || i % 10 == 5){
            printf("%d\n", i);
            total++;
        }
    }
    printf("N°: %d\n", total);

    return 0;
}