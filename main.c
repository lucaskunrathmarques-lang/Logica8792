#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>






int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int soma = 0;

    for(int i = 1; i <= 50; i++){
      if(i % 2 == 1){
        printf("%d\n", i);
        soma += i;
      }
    }
    
    printf("a soma dos numeros é: %d\n", soma);
    

    
    
    





      
    
    

    return 0;
 
}