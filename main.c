#include<stdio.h>
#include<windows.h>
#include<math.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int i = 1;
    while(i <= 50){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}