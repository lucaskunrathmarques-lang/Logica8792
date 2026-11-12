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

    for(int i = 0; i <= 200; i++){
      if(i % 10 == 3){
        n++;
      }
    }

    printf("total de numero que terminam em 3 é: %d\n", n);

    
    
    





      
    
    

    return 0;
 
}