#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int contardigitos(int numero){
  if(numero < 10){
    return 1;
  }
  return 1 + contardigitos(numero / 10);
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    printf("quantidade : %d\n", contardigitos(458472));
    
    
    
    
    





      
    
    

    return 0;
 
}