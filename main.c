#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int qua(int numero){
  return numero * numero;
}





int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int n;

    printf("digite um numero, para saber o seu quadrado:" );
    scanf("%d", &n);

    printf("o quadrado do numero %d é: %d\n", n, qua(n));

      
    
    

    return 0;
 
}