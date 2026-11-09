#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

float soma(int n){
  int total = 0;

  for(int i = 1; i <= n; i++){
        total += i;
  }
  return total;
}




int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int m;

    m = soma(5);

    printf("\nsoma de 1 a N: %d\n", m);
    
    
    
    
    





      
    
    

    return 0;
 
}