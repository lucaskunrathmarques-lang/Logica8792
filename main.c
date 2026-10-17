#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    int soma = 0;
    int l;

    printf("digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += i;
        soma -= 1;
        printf("%d + %d = %d\n", soma, i, soma + i);
       
    }

    
    
    
    
    
    
    

    


    return 0;
 
}