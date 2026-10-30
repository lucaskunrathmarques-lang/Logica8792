#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


#define PI 3.14159;
float area_circulo(float raio){
  return PI * raio * raio;
}





int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    float r;
    printf("Raio: ");
    scanf("%d", r);
    printf("Area: %.2f\n", area_circulo);

      
    
    

    return 0;
 
}