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

    for(int i = 10; i <= 100; i++){
      int dezena = i / 10;
      int unidade = i % 10;

      n = dezena < unidade;

      if(n){
        printf("%d\n", i);
        total++;
      }
    }

    printf("o numero total é: %d", total);
    
    





      
    
    

    return 0;
 
}