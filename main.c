#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


long long fatorial(int n){
  long long resultado = 1;
  for(int i = 2; i <= n; i++){
    resultado *= i;
  }
  return resultado;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    printf("5! = %lld\n", fatorial(5));
    
    
    
    
    





      
    
    

    return 0;
 
}