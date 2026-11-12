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

    for(int i = 1; i <= 100; i++){
      if(i % 10 == 0 || i % 10 == 5){
        n += i;
      }
    }

    printf("%d\n", n);

    
    
    





      
    
    

    return 0;
 
}