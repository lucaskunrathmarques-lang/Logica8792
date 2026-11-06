#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


void tabuada(int numero, int contador){
  if(contador > 10){
    return;
  }
  printf("%d X %d = %d\n", numero, contador, numero * contador);

  tabuada(numero, contador + 1);
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int n;

    printf("digite o numero da tabuada: ");
    scanf("%d", &n);

    tabuada(n, 1);
    
    
    
    
    





      
    
    

    return 0;
 
}