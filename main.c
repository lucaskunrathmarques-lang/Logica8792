#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    

   for(int i = 1; i <= 10000; i++){
    printf("%d\n", i);
    i++;
   }

    printf("\nMeu for funcionou!!");
    

    return 0;
 
}