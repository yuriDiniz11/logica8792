#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    

    //for e if
    //sem declarar i, int ano = 2000 ate 2030

    for(int ano = 2000; ano <= 2030; ano++){
        if(ano % 100 != 0 && ano % 4 == 0){
            printf("%d\n", ano);
        }
    }

    return 0;
}