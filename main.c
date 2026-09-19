#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   for(int i = 1; i <= 100; i++){
        printf("%d\n", i);
        
   }
    return 0;
}