#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   float a, b, c;

   printf("Digite os três lados do triângulo: ");
   scanf("%f %f %f", &a, &b, &c);

   if(a + b > c && a + c > b && b + c > a){
    printf("Os lados formam um triângulo!\n");
        }else{
    printf("Os lados NÂO formam um triângulo!\n");
   } 
   
    return 0;
}

