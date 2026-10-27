#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int soma(int a, int b){
  return a + b;
}

void soma1(){
  int x, y, resultado;

  printf("\ndigite um valor para x:");
  scanf("%d", &x);

  printf("\ndigite um valor para y:");
  scanf("%d", &y);

  resultado = x + y;

  printf("\na soma do %d + %d = %d", x, y, resultado);
}




int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int resultado = soma(5, 5);
    printf("%d\n", resultado);

      
    
    

    return 0;
 
}