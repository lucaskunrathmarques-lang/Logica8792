#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>






int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    for(int i = 0; i<= 10; i++){
      printf("%d\n", i);
    }

    for(int i = 0; i <= 10; i++){
      if(i % 2 == 0){
        printf("\no numero %d é par\n", i);
      }else{
        printf("\no numero %d é impar\n", i);
      }
    }
    
    

    
    
    





      
    
    

    return 0;
 
}