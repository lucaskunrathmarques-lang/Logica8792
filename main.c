#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int ehpar(int n){
  return n % 2 == 0;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int quantidade = 0;
    int soma = 0;

    printf("pares de 1 a 20: ");

    for(int i = 1; i <= 20; i++){
        if(ehpar(i)){
          printf("%d\n", i);
          quantidade++;
          soma += i;
        }
    }

    printf("\nqunatidade: %d\n", quantidade);
    printf("soma: %d\n", soma);
    





      
    
    

    return 0;
 
}