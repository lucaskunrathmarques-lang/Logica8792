#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>






int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int n;

    for(int i = 1; i <= 1000; i++){

      if(i % 7 == 0 && i % 2 != 0){
        printf("%d\n", i);
        n++;
      }
    }

    printf("total de numeros que são diviziveis por 7 e não por 2: %d\n", n);
    
    
    





      
    
    

    return 0;
 
}