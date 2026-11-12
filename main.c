#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>






int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    for(int ano = 2000; ano <= 2030; ano++){
      if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("ano bissexto %d\n", ano);
      }
    }


    
    
    





      
    
    

    return 0;
 
}