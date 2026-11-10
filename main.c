#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int somadigitos(int n){
  int soma = 0;
  
  while (n != 0)
  {
    soma += n % 10;
    n /= 10;
  }
  return soma;
  }



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    printf("soma dos digitos é: %d\n", somadigitos(n));
    
    
    
    
    





      
    
    

    return 0;
 
}