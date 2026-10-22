#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
    float n; 

    do{
      printf("digite uma nota (de 0 a 10)");
      scanf("%f", &n);
    }
    while (n < 0 || n > 10);

      printf("nota valida: %.2f\n", n);
    
    
    
    

    


    return 0;
 
}