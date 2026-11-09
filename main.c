#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int soma(int n){
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

    printf("digite um valor: ");
    scanf("%d", &m);

    printf("\nsoma de 1 a N: %d\n", soma(m));
    
    
    
    
    





      
    
    

    return 0;
 
}