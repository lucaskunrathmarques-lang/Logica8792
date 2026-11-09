#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


float CparaF(float c){
  return c * 9 / 5 + 32;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    float cel, fah;

    printf("digite a temperatura em celsius: ");
    scanf("%f", &cel);

    fah = CparaF(cel);

    printf("%.1f C = %.1f F\n", cel, fah);
    
    
    
    
    





      
    
    

    return 0;
 
}