#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
    int n, soma = 0;
    
    printf("digite um numero: ");
    scanf("%d", &n);

    while (n != 0)
    {
       if(n % 2 == 0){
            soma++;
        }else{
            printf("digite um numero valido\n");
        }
            
            printf("\ndigite um numero( 0, para parar)");
            scanf("%d", &n);
    }
   
    printf("a soma total é, %d", soma);
    
    
    

    


    return 0;
 
}