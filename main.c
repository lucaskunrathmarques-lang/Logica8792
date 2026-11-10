#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int maiordetres(int a, int b, int c){
  int maior = a;

  if(b > maior){
    maior = b;
  }
  if(c > maior){
    maior = c;
  }
  return maior;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int n, m, l;

    printf("digite 3 numero: ");
    scanf("%d %d %d", &n, &m, &l);

    printf("o maior numeor é: %d\n", maiordetres(n, m, l));
    
    
    





      
    
    

    return 0;
 
}