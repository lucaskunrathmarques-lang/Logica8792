#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int quadrado(int n){
  return n * n;
}

int cubo(int n){
  return n * n * n;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int i;

    printf("deigite um numero para saber o seu quadrado e o seu cubo: ");
    scanf("%d", &i);

    printf("o quadradode %d é: %d\n o cubo de %d é: %d\n", i, quadrado(i), i, cubo(i));
    
    
    
    
    





      
    
    

    return 0;
 
}