#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>




    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, contador = 0;

    printf("digite o limite N:");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        int primo =1;
        for(int l = 2; l < i; l++){
            if(i % l == 0){
                primo = 0;
                break;
            }
        }
        if(primo){
            contador++;
        }
    }

    printf("quantidade de primos entre 1 e %d: %d\n", n, contador);




    

    return 0;
 
}