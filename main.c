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
    int total;

    for(int i = 1; i <= 100; i++){
    
      if(i % 4 == 0){
        printf("%d\n", i);
        total++;
      }
    }

    printf("o numero total é: %d", total);
    
    





      
    
    

    return 0;
 
}