#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    

    //de 0 até 200 valores que terminam em 3
    int n = 0;

    for(int i = 1; i <= 200; i++){
        if(i % 10 == 3){
            printf("%d\n", i);
            n++;
        }
    }
    printf("\n%d", n);

    return 0;
}