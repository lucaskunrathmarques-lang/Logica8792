#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>






int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int n = 0;

    for(int i = 100; i <= 999; i++){
      int centena = i / 100;
      int unidade = i % 10;
      
      if(centena == unidade){
        printf("%d\n", i);
        n++;
      }

    }
    
    printf("palindroma de 3 digitos: %d\n", n);





      
    
    

    return 0;
 
}