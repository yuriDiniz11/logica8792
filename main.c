#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);    

    int total = 0;

    for(int i = 1; i <= 100; i++){
        if(i % 10 == 7){
            printf("%d\n", i);
        }
    }
    
    return 0;
}