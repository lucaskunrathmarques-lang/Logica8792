#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    

   char frutas[4][20] = {"maça", "banana", "uva", "morango"};

   printf("%s\n", frutas[0]); 
   printf("%s\n", frutas[1]);
   printf("%s\n", frutas[2]);
   printf("%s\n", frutas[3]); 
    

    return 0;
 
}