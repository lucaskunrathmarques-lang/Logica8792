#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


float areare(float base, float altura){
    return base * altura;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    float a, n;

    printf("digite a base e a altura do retangulo: ");
   
    printf("\nbase: ");
    scanf("%f", &a);
    
    printf("altura: ");
    scanf("%f", &n);

    printf("area: %.2f\n", areare(a, n));
    
    
    
    
    





      
    
    

    return 0;
 
}