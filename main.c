#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
    int n, s = 0;

    do{
      printf("digite um numero ( 0 para parar)");
      scanf("%d", &n);
      s += n;
    }while(n != 0);

    printf("soma: %d\n", s);
    
    
    
    

    


    return 0;
 
}