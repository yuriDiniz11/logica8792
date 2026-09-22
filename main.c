#include<stdio.h>
#include<windows.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int idades[3] = {25, 35, 45};

   printf("%s %d %s", "Manoel tem,", idades[0], "anos!");
   printf("%s %d %s", "\nRafael tem,", idades[1], "anos!!");
   printf("%s %d %s", "\nRodrigo tem,", idades[2], "anos!!!");   

    return 0;
}