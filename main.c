#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


float media(float nota[], int n){
  float soma = 0;
  for(int i = 0; i < n; i++){
    soma += nota[i];
    
  }
  return soma / n;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    float nota[5];

    for(int i = 0; i < 5; i++){
      printf("notas %d: ", i + 1);
      scanf("%f", &nota[i]);
    } 

    printf("media: %.1f\n", media(nota, 5));



      
    
    

    return 0;
 
}