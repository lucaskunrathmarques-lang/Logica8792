#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


void contar(int n){
  if(n == 0){
    return;
  }

  contar(n - 1);
  printf("%d\n", n);
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
   
    contar(5);
    
    
    
    





      
    
    

    return 0;
 
}