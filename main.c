#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


float CparaF(){
  float cel;

  printf("digite a temperatura em celsius: ");
  scanf("%f", &cel);

  return cel * 9 / 5 + 32;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    float fah;

    fah = CparaF();

    printf("temperatura em fahrenheit: %.1f F\n", fah);
    
    
    
    
    





      
    
    

    return 0;
 
}