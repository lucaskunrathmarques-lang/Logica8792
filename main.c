#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
    int n; 

    do{
      printf("digite um numero (positivo)");
      scanf("%d", &n);
    }
    while (n < 0);
    
      printf("voce digitou: %d\n", n);
    
    
    
    

    


    return 0;
 
}