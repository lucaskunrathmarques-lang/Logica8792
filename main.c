#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    

   char nomes[4][20] = {"caio", "joao", "rafael", "lucas"};

   printf("%s\n", nomes[0]);
   printf("%s\n", nomes[1]);
   printf("%s\n", nomes[2]);
   printf("%s\n", nomes[3]); 
  
   
    

    return 0;
 
}