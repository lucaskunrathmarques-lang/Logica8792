#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int somardigitos(int numero){
  if(numero == 0){
    return 0;
  }
  return (numero % 10) + somardigitos(numero / 10);
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    printf("soma: %d\n", somardigitos(1234));
    
    
    
    
    





      
    
    

    return 0;
 
}